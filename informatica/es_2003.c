 /*Quindi scrivi un programma che permetta di riempire un vettore di 30 elementi con valori casuali compresi tra 0 e 10
  e una funzione che restituisca il numero di volte in cui compare un valore (compreso tra 0 e 10) scelto dall'utente.*/
#include <stdio.h>
#include <stdlib.h> 
#include <time.h>

#define DIM 30

void RiempiVettore(int vettore[], int dim){
    for(int i=0; i<dim; i++){
        vettore[i]=rand()%11;
        printf("%d\n ", vettore[i]);
    }
}

int Conta(int vettore[], int dim, int valore){
    int cnt=0;
    for(int i=0; i<dim; i++){ 
        if(vettore[i]==valore){
            cnt++;
        }
    }
    return cnt;
}

int main(){
    int vettore[DIM];
    int valore;
    srand(time(NULL));
    RiempiVettore(vettore, DIM);
    printf("Inserisci un valore compreso tra 0 e 10: ");
    scanf("%d", &valore);
    printf("Il valore %d compare %d volte nel vettore\n", valore, Conta(vettore, DIM, valore));
    return 0;
}