/*Scrivi un programma in C che riempia un vettore di 10 elementi con numeri casuali compresi tra 0 e 100. 
Quindi fai in modo che il programma possa mostrare i due valori maggiori presenti nel vettore. 
Suddividi il programma in funzioni (riempiVettore(), stampaVettore(), stampaDueMax()).
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define DIM 10

void riempiVettore(int *numero){   
    for (int i = 0; i < DIM; i++) {
        numero[i] = rand() % 101;
    }
}

void stampaVettore(int *numero){
    for (int i = 0; i < DIM; i++) {
        printf("%d\n", numero[i]);
    }
    printf("\n");
}

void stampaDueMax(int *numero){
    int max1 = 0, max2 = 0;
    for (int i = 0; i < DIM; i++) {
        if (numero[i] > max1) {
            max2 = max1;
            max1 = numero[i];
        } else if (numero[i] > max2) {
            max2 = numero[i];
        }
    }
    printf("I due valori massimi sono: %d e %d\n", max1, max2);
}

int main(){
    srand(time(NULL));
    int num[DIM];
    riempiVettore(num);
    stampaVettore(num);
    
    stampaDueMax(num);
}