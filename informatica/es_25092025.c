/*scrivere un programma in linguaggio c che:
1. allochi dinamicamente un array iniziale di n numeri
2. inserimento di valori
3. stampa array
4. calcola la somma degli elementi multipli di 3
5. creiamo un nuovo array contenente solo valori dispari*/
#include <stdio.h>
#include <stdlib.h>
#define N 5

int main(){
    int *array=NULL, n, somma=0;
    printf("inserisci il numero di elementi dell'array: ");
    scanf("%d", &n);
    
    array=(int*)malloc(n*sizeof(int));

    if(array==NULL){
        printf("errore allocazione memoria");
        return 1;
    }
    printf("inserisci i valori dell'array:\n");
    for(int i=0; i<n; i++){
        printf("elemento: ");
        scanf("%d", &array[i]);
        
        if(array[i]%3==0){
            somma+=array[i];
        }
    }
    printf("l'array inserito e':\n");
    for(int i=0; i<n; i++){     
        printf("%d ", array[i]);
    }
    printf("\nla somma degli elementi multipli di 3 e': %d\n", somma);
    
    free(array);
    return 0;

}