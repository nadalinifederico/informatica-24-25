/*Calcolare quanti e quali numeri primi sono presenti in un ampio intervallo di valori.
Definizione di numero primo: un numero si dice primo se è divisibile solo per 1 e per se stesso.*/
#include <stdio.h>
int main(){
    int n=0;
    do{
        printf("inserici un numero: ");
        scanf("%d", &n);
    }while(n<i);
    for(int i=1; i<n; i++){
        if(n%i==0){
            printf("il numero è primo");
        }
    }
}