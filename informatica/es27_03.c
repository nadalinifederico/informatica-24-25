#include <stdio.h>
#include "libArray.h"
#include "libArray.c"

#define DIM 10

int main(){
    int v1[DIM], v2[DIM], temp;
    riempiVettoreCasuale(v1, DIM , 1, 50);
    riempiVettoreCasuale(v2, DIM , 51, 100);
    printf("v1: ");
    stampaVettore(v1, DIM, '-');
    printf("v2: ");
    stampaVettore(v2, DIM, '-');
    for(int i=0; i<DIM; i++){
        temp=v1[i];
        v1[i]=v2[i];
        temp=v2[i];
    }
    printf("v1: ");
    stampaVettore(v1, DIM, '-');
    printf("v2: ");
    stampaVettore(v2, DIM, '-');

}