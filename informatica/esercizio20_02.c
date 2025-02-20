/*dato un valore stampare i suoi fattori
es: 28= 2*2*7   2,2,7*/
#include <stdio.h>

void stampa_fattori(int _n);

int main() {
    int n;
    do {
        printf("Inserisci un numero: ");
        scanf("%d", &n);
    } while (n<=0);
    stampa_fattori(n);
    return 0;
}

void stampa_fattori(int _n){
    for(int i=2; i<=_n; i++){
        while(_n%i==0){
            _n/=i;
            printf("%d ", i);
        }
    }
}