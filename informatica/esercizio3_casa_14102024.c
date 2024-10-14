/*Scrivere un programma che legge 2 orari in ore minuti e secondi e dice quale viene prima dei due. 
(Si risolva l’esercizio senza trasformare tutto in secondi).*/
#include <stdio.h>

int main() {
    int ore1, minuti1, secondi1;
    int ore2, minuti2, secondi2;

    printf("Inserisci il primo orario : ");
    scanf("%d %d %d", &ore1, &minuti1, &secondi1);

   
    printf("Inserisci il secondo orario: ");
    scanf("%d %d %d", &ore2, &minuti2, &secondi2);

    
    if (ore1 < ore2 || (ore1 == ore2 && (minuti1 < minuti2 || (minuti1 == minuti2 && secondi1 < secondi2)))) {
        printf("Il primo orario viene prima.\n");
    } else if (ore1 > ore2 || (ore1 == ore2 && (minuti1 > minuti2 || (minuti1 == minuti2 && secondi1 > secondi2)))) {
        printf("Il secondo orario viene prima.\n");
    } else {
        printf("I due orari sono uguali.\n");
    }

    return 0;
}