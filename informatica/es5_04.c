/*Caricare
da tastiera un vettore di N elementi. Scorrendo il vettore, al primo
zero incontrato stampare la somma di tutti gli elementi considerati e
il loro numero;*/

#include <stdio.h>
#define DIM 10

void riempiVettore(int vett[], int dim) {
    for (int i=0; i<dim; i++){
        printf("Inserisci il numero: ");
        scanf("%d", &vett[i]);
    }
}
int main() {
    int vett[DIM], somma=0, cnt=0;
    riempiVettore(vett, DIM);
    for (int i=0; i<DIM; i++){
        if (vett[i]==0) {
            printf("Somma: %d\n", somma);
            printf("Numero di elementi: %d\n", cnt);
        }
        somma+=vett[i];
        cnt++;
    }
    return 0;
}