/*calcola il massimo tra due numeri interi usano una funzione */
#include <stdio.h>
int massimo(int _n1, int _n2);
int main(){
    int n1=0, n2=0;
    int maggiore=0;
    do{
        printf("inserici il primo numero: ");
        scanf("%d", &n1);
        printf("inserici il secondo numero: ");
        scanf("%d", &n2);
    }while(n1<=0 || n2<=0);
    maggiore=massimo(n1,n2);

    printf("il numero maggiore tra i %d e %d è uguale a %d", n1, n2, maggiore);
    return 0;
}

int massimo(int _n1, int _n2){
    int maggiore=0;
    if(_n1>_n2){
        maggiore=_n1;
    }else{
        maggiore=_n2;
    }
    return maggiore;
}