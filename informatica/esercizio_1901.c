/* Date N coppie di numeri (con N generato casualmente con valori compresi tra 2 e 7)
 contare e stampare quelle che hanno i valori l'uno l'opposto dell'altro. (ad esempio 3 e -3 oppure -7 e 7)*/
 #include <stdio.h>
 #include <time.h>
 #include <stdlib.h>
 int main(){
    srand(time(NULL));
    int nCasuale= rand()%6+2;
    int conta = 0; 
    printf("nCasuale %d\n", nCasuale);
    for(int i=1; i<=nCasuale; i++){
        int n1= rand()%6+2; 
        int n2= (rand()%6+2)*-1; 
        if(n1==n2*-1){
            printf("%d è l'opposto di %d\n",n1,n2);
            conta += 1;
        }    
    }
    if (conta == 0){
        printf("Nessun numero è opposto\n");
    }
 }