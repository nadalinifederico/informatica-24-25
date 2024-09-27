/******************************************************************************
 Calcola il resto ricevuto dal benzinaio: dopo aver inserito il numero di litri 
 di carburante introdotto nel motorino e il costo al litro della benzina, il programma 
 deve visualizzare l’importo da pagare. L’utente digita l’importo di una banconota 
 di valore superiore a tale importo e il programma visualizza il resto della banconota che questi deve ricevere.
*******************************************************************************/

#include <stdio.h>


int main()
{
    float litri,costoalL,pagare,pagamento,resto;
    printf("inserisci litri di carburante prelevati ");
    scanf("%f",&litri);
    printf("inserisci il costo della benzina al litro ");
    scanf("%f",&costoalL);
    pagare=litri*costoalL;
    printf("%f\n",pagare);
    printf("inserisci il valore della banconota\n");
    scanf("%f",&pagamento);
    resto=pagamento-pagare;
    printf("%f",resto);

    return 0;
}