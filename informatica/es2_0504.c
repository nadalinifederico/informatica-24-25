/*Dato un vettore numerico di N posizioni al primo elemento dispari stampare
quanti valori diversi da zero si sono incontrati, il numero dispari
incontrato e la sua posizione nel vettore;*/

#include <stdio.h>
#define DIM 10

void riempiVettore(int vett[], int dim) {
    for (int i=0; i<dim; i++){
        printf("Inserisci il numero: ");
        scanf("%d", &vett[i]);
    }
}
int main() {
    int vett[DIM], cnt=0, pos=0, dispari=0;
    riempiVettore(vett, DIM);
    for (int i=0; i<DIM; i++){
        if (vett[i]%2!=0 && pos==0) {
            pos=i;
            dispari=vett[i];
        }
        if (vett[i]!=0) {
            cnt++;
        }
    }
    printf("Numero dispari: %d\n", dispari);
    printf("Posizione: %d\n", pos);
    printf("Numero di elementi diversi da zero: %d\n", cnt);
    return 0;
}