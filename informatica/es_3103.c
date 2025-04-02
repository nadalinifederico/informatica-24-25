/*dopo aver caricato un vettore numerico confrontare
la somma delle componenti di indice pari con la somma 
delle componenti dispari e dire se la somma maggiore è 
divisibile per un valore assegnato*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define DIM 5

void caricaVett(int vett[], int dim){
    for(int i=0; i<dim; i++){
        printf("inserici il valore: ");
        scanf("%d", vett[i]);
    }
}
int main(){
    int vett[DIM];
    caricaVett(vett, DIM);
}
