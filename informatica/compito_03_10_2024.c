/*Scrivi un programma che legge in input il valore di due lati di un quadrilatero,
 individua se si tratta di un quadrato o di un rettangolo e ne calcola il perimetro e l’area*/


#include <stdio.h>

int main() {
    float lato1, lato2, perimetro, area;

    
    printf("Inserisci il primo lato: ");
    scanf("%f", &lato1);
    printf("Inserisci il secondo lato: ");
    scanf("%f", &lato2);

    if (lato1 == lato2) {
        printf("Tipo: Quadrato\n");
        perimetro = 4 * lato1;
        area = lato1 * lato1;
    } else {
        printf("Tipo: Rettangolo\n");
        perimetro = 2 * (lato1 + lato2);
        area = lato1 * lato2;
    }

    
    printf("Perimetro: %.2f\n", perimetro);
    printf("Area: %.2f\n", area);

    return 0;
}