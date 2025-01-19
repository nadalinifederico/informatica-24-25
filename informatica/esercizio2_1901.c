/*Data una serie di N numeri (con N scelto dall'utente maggiore di 3) 
determinare il valore più grande e quello immediatamente inferiore (il secondo).*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    int n=0;
    int n_casuale=0;
    int max=0;
    int secondo=0;
    srand(time(NULL));
    do{
        printf("inserici un numero maggiore di 3: ");
        scanf("%d", &n);
    }while(n<=3);

    for(int i=1; i<=n; i++){
        n_casuale=rand()%11;
        printf("n_casuale= %d\n",n_casuale);
        if(n_casuale>max){
            printf("%d il numero è maggiore: \n",n_casuale);
            max=n_casuale;
        }
        if(n_casuale>secondo && n_casuale<max){
            printf("%d il numero è minore: \n", secondo);
            secondo=n_casuale;
        }
        
    }
    printf("il numero maggiore è %d\n", max);
    printf("il secondo numero maggiore è %d", secondo);
}