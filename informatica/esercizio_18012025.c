/*Scrivi un programma che visualizzi la somma dei quadrati dei primi 12 numeri naturali successivi a 8*/
#include <stdio.h>
int main(){
    int somma=0;
    int temp=0;

    for(int i=8; i<=20; i++) {
        temp= i*i;
        somma+=temp;
    } 
    printf("la somma dei numeri è %d", somma);
}