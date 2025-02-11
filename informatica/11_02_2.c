/*Scrivete una funzione con parametro un intero n(passato per valore) che stabilisca se n è un numero primo. 
La funzione restituirà 1 se il numero è primo altrimenti 0.*/
#include <stdio.h>
int trova_primo(int _n);
int main(){
    int n=0;
    int risultato = 0;
    do{
        printf("inserici il valore: ");
        scanf("%d",&n);
    }while(n<=0);
    risultato = trova_primo(n);
    if (risultato == 0) {
        printf("Il numero %d non e' primo.\n",n);
    }
    else {
        printf("Il numero %d e' primo.\n",n);
    }
    return 0;
}
int trova_primo(int _n){
    int trovato= 1;
    if (_n == 1){
        trovato = 0;
    }
    else {
        for (int i=2; i<_n; i++){
            if (_n % i == 0) {
                trovato = 0;
                break;
            }
        }
    }
    return trovato;
}