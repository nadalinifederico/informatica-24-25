/*leggere una sequenza di numeri,visualizzarla
si termina non appena arriva uno 0*/

#include <stdio.h>

int main(){
    int numero;

    printf("inserici un numero:");
    scanf("%d", &numero);

    while(numero!=0){
        printf("il valore inserito è: %d\n", numero);
        printf("inserici un numero:");
        scanf("%d", &numero);
    }
}