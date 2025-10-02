/*scrivi un programma in c che:
1. chiedere all'utente quanti numeri interi vuoi inserire;
2. alloca dinamicamnete un array di quella dimensione con malloc();
3. permette all'utente di inserire i numeri;
4. chiede all'utente se vuole aumentare la dimensione dell'array;
- se si, richiede la nuova dimensione e usa realloc() per ridimensionarlo;
- permette quindi di inserire i nuovi valori negli spazzi aggiunti;
5. infine, stampa tutti gli elementi dell'array*/

#include <stdio.h>
#include <stdlib.h>

int *alloca_array(int n) {
    int* arr=(int*)malloc(n * sizeof(int));
    if (arr==NULL) {
        printf("Errore allocazione memoria\n");
        return NULL;
    }
    return arr;
}
void inserisci_valori(int* arr, int n) {
    printf("Inserisci i valori dell'array:\n");
    for (int i=0; i<n; i++) {
        printf("elemento: ");
        scanf("%d", &arr[i]);
    }
}
int stampa_array(int* arr, int n) {
    printf("L'array inserito e':\n");
    for (int i=0; i<n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main(){
    int *_arr = NULL;
    int _n, nuova_n, scelta;

    printf("Quanti numeri vuoi inserire? ");
    scanf("%d", &_n);
    _arr=alloca_array(_n);
    if (_arr==NULL) {
        exit(1);
    }
    inserisci_valori(_arr, _n);
    printf("Vuoi aumentare la dimensione dell'array? (1=SI, 0=NO): ");
    scanf("%d", &scelta);
    if (scelta==1) {
        printf("Nuova dimensione dell'array: ");
        scanf("%d", &nuova_n);
        if (nuova_n>_n) {
            int *temp=(int*)realloc(_arr, nuova_n * sizeof(int));
            if (temp==NULL) {
                printf("Errore realloc\n");
                return 1;
            }
            _arr=temp;
            printf("Inserisci i nuovi valori:\n");
            for (int i=_n; i<nuova_n; i++) {
                printf("elemento: ");
                scanf("%d", &_arr[i]);
            }
            _n=nuova_n;
        } else {
            printf("La nuova dimensione deve essere maggiore di quella attuale.\n");
        }
    }
    stampa_array(_arr, _n);
    free(_arr);
    return 0;
}