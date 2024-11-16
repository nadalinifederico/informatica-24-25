/*Scrivi un programma che legge una sequenza di numeri interi terminanti con uno 0
(cioè il programma termina quando viene inserito 0) e ne ricerca il valore minimo visualizzandolo sullo schermo.
*/

#include <stdio.h>

int main(){
    int num=0;
    int num_min = 0;

    printf("inserici una sequenza di numeri interi: \n");
    scanf("%d", &num);
    num_min = num;
    
    while (num!=0){
        
        if (num < num_min) {
            num_min = num;
            printf("Il valore attuale più basso è %d\n", num_min);
        }
        scanf("%d", &num);
    }

    printf("il valore più basso inserito è %d\n", num_min);   
}