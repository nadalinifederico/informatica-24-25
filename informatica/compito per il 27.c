#include <stdio.h>
/*Calcola il costo sostenuto dalla scolaresca per andare a teatro sapendo che il biglietto ordinario costa 12 euro,
 i 2 docenti accompagnatori hanno lo sconto del 50% e che il numero degli alunni deve essere letto in INPUT.*/

int main()
{
    float n1,n2,prezzodocenti;
    
    printf("inserisci il numero di studenti ");
    scanf("%f",&n1);
    prezzodocenti=(12/2)*2;
    n2=12*n1+prezzodocenti;
    printf("%f",n2);
    
    return 0;
}