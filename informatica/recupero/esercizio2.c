/*dato un numero a più cifre stamapre quelle di posizione pari
es: 5231     stamperà: 3 e 5*/
#include <stdio.h>
int main(){
    int n=0, cifra;
    do{
        printf("inserici un numero a 4 cifre: ");
        scanf("%d", &n);
    }while(n<1000 || n>9999);
    /*in modo generico assicuriamo che n sia positivo
    do{
        printf("inserici un numero a 4 cifre: ");
        scanf("%d", &n);
    }while(n<=0;
    */

   for(int i=1; i<=4; i++){
        cifra=n%10;
        n=n/10;
        if(i%2==0){
            printf("la cifra di pisizione pari è: %d\n", cifra);
        }
   }
}