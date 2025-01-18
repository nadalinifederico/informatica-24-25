/*Richiesti due numeri da tastiera verifica e comunica se sono numeri Amici/Amicali.
Definizione di numeri Amicali: due numeri si dicono amicali se la somma dei divisori del primo
numero è uguale al secondo numero e viceversa.*/
#include <stdio.h>
int main(){
    int n1,n2;
    int somma1,somma2;
    int operazione1, operazione2;
    int e;

    do{
        printf("inserici il primo numero: ");
        scanf("%d", &n1);
    }while(n1<0);

    do{
        printf("inserici il primo numero: ");
        scanf("%d", &n2);
    }while(n2<0);

    for(int i=1; i<n1; i++){
        operazione1=n1%e;
        if (operazione1==0){
              somma1=somma1+i;
        }
    }
    for(int j=1; j<=n2; j++){
        operazione2=n2%j;
        if (operazione2==0){
              somma2=somma2+e;
        }
    }
    if(somma1==n2 && somma2==n1){
        printf("il %d e il %d sono numeri amicali",n1,n2);
    }
    else{
        printf("il %d e il %d non sono numeri amicali",n1,n2);
    }
}