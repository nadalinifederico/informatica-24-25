#include <stdio.h>


int main() {
    float lato1, lato2, lato3;

    
    printf("Inserisci il primo lato: ");
    scanf("%f", &lato1);
    printf("Inserisci il secondo lato: ");
    scanf("%f", &lato2);
    printf("Inserisci il terzo lato: ");
    scanf("%f", &lato3);

    if (lato1 == lato2 && lato2 == lato3) {
        float perimetro = lato1 * 3;  
        float area = (3 / 4) * lato1 * lato1; 

   
        printf("Triangolo equilatero\n");
        printf("Perimetro: %.2f\n", perimetro);
        printf("Area: %.2f\n", area);
    } else {
        printf("Non è un triangolo equilatero.\n");
    }

    return 0;
}