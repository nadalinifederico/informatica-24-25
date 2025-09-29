/*Scrivere un programma in C che gestisca un insieme di numeri interi usando un array dinamico.
Il programma deve permettere, tramite menù:
    1. Aggiungere un numero (espandendo l’array con realloc)
    2. Visualizzare tutti i numeri
    3. Cercare un numero specifico
    4. Ordinare i numeri in ordine crescente
    5. Eliminare un numero scelto
    6. Uscire
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int *numeri=NULL; //array dinamico
    int dimensione=0; //quanti elementi ci sono 
    int scelta, n, i;

    do{
        printf("----MENU----\n");
        printf("1. Aggiungere un numero (espandendo l’array con realloc)\n");
        printf("2. Visualizzare tutti i numeri\n");
        printf("3. Cercare un numero specifico\n");
        printf("4. Ordinare i numeri in ordine crescente\n");
        printf("5. Eliminare un numero scelto\n");
        printf("6. Uscire\n");
        printf("esegiu una scelta: ");
        scanf("%d", &scelta);

        switch(scelta){
            case 1:
                printf("inserisci un numero: ");
                scanf("%d", &n);
                numeri=(int*)realloc(numeri, (dimensione+1)*sizeof(int));
            break;
        }
    } while(scelta=!6);
    
}