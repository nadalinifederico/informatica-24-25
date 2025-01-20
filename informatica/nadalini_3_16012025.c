/*Dato numero a più cifre comunicare quale e quante cifre corrispondono alla propria posizione
Esempio: n1=4211 la cifra 1corrisponde alla prima posizione e la cifra 4
corrisponde alla quarta posizione.*/
#include <stdio.h>

int main(){
    int n=0;
    int cifra,pos=1,num_q;

    do{
        printf("inserici un valore: ");
        scanf("%d", &n);
    }while(n<=0);

    num_q=n;
    while(num_q!=0){
        cifra=num_q%10;
        num_q=num_q/10;
        if(cifra==pos){
            printf("\n la cifra %d corrisponde alla sua posizione %d", cifra, pos);
        }
        pos++;
    }
}