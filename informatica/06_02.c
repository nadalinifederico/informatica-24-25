/*calcolare il fattoriale di un numero */

#include <stdio.h>
long int fattoriale(int n);
int main() {
    int numero;
    printf("Inserisci un numero: ");
    scanf("%d", &numero);
    printf("Il fattoriale di %d è %ld\n", numero, fattoriale(numero));
    return 0;
}
long fattoriale(int n) {
    int risultato = 1;
    for (int i = 1; i <= n; i++) {
        risultato *= i;
    }
    return risultato;
}