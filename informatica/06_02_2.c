/*calcolare il fattoriale di un numero */

#include <stdio.h>
void fattoriale(int n, long *_fatt);
int main() {
    int numero;
    long fatt=1;
    printf("Inserisci un numero: ");
    scanf("%d", &numero);
    fattoriale(numero, &fatt);
    printf("Il fattoriale di %d è %ld\n", numero, fatt);
    
    return 0;
}
void fattoriale(int n, long *_fatt) {
    for (int i = 1; i <= n; i++) {
        *_fatt *= i;
    }
}