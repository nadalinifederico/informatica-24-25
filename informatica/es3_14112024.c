/*leggere una sequenza di numeri,visualizzarla e 
determinare quanti numeri sono stati inseriti
si termina non appena arriva uno 0*/

#include <stdio.h>

int main(){
    int numero;
    int cnt=1;

    printf("inserici un numero:");
    scanf("%d", &numero);

    while(numero!=0){
        printf("il valore inserito è: %d\n", numero);
        printf("inserici un numero:");
        scanf("%d", &numero);
        cnt++;
    }
    printf("hai inserito %d valori", cnt);
}