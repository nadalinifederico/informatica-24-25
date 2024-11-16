/*Scrivi un programma che legge un numero NUM strettamente positivo e 
visualizza tutti i numeri pari inferiori a tale numero fino a 0.*/

#include <stdio.h>

int main(){
    int num=0;

    do{
        printf("inserici un numero strettamente positivo: ");
        scanf("%d", &num);
        
        if(num<=0){
            printf("il numero deve essere strettamnete positivo. riprova\n");
        }
    } while (num<=0);

    while(num>-1){
        if(num%2==0){
            printf("%d\n", num);
        }
        num--;
    }
    
}