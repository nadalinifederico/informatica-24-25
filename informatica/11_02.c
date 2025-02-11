/*Scrivete una funzione avente due parametri interi(passati per valore) b ed e che calcoli la potenza b^e con il metodo delle moltiplicazioni successive.*/
#include <stdio.h>

long calcola(int _b, int _e);
int main(){
    int b=0, e=0;
    long risultato=1;
    do{
        printf("inserici il primo valore: ");
        scanf("%d",&b);
        printf("inserici il l'elevamento a potenza: ");
        scanf("%d",&e);
    }while(b<=0 || e<=0 );
    risultato=calcola(b,e);
    printf("il risultato e: %ld", risultato);
}

long calcola(int _b, int _e){
    long risultato=0;
    long temp=_b;
    for(int i=1; i<_e; i++){
        _b=_b*temp;
    }
    risultato=_b;
    return risultato;
}