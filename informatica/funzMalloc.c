/*creare un array dinamico chiedendo all'utente la sua dimensione
il programma deve prevedere le seguenti funzioni:
1. crea l'array
2. inserisce gli elementi nell'array
3. stampa dei valori
4. esci*/
#include <stdio.h>  
#include <stdlib.h>

int* creaVettore(int _n){
    int *_vettore=(int*)malloc(_n*sizeof(int));
    if(_vettore==NULL){
        printf("errore");
        return 1;
    }
    return _vettore;
}

int* insericiValori(int *_vettore, int _n){
    for(int i=0;i<_n;i++){
        printf("inserisci l'elemento");
        scanf("%d", &_vettore[i]);
    }
    return _vettore;
}

void stampaVettore(int *_vettore, int _n){
    printf("hai inserito i seguenti elementi: ");
    for(int i=0;i<_n;i++){
        printf("%d ", _vettore[i]);
    }
    printf("\n");
}

int main(){
    int *vettore=NULL; //puntatore al vettore
    int n;

    do{
        printf("quanti numeri vuoi inserire? ");
        scanf("%d",&n);
    }while(n<0);

    vettore=creaVettore(n);
    vettore=inserisciValori(vettore,n);
    stampaVettore(vettore,n);

    free(vettore);
    return 0;
}