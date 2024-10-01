/******************************************************************************
Calcola l’importo totale da pagare al cinema, sapendo che, ogni 12 studenti, spetta una gratuità 
e che per chi ha meno di 15 anni il biglietto è scontato del 40%: leggi in ingresso il numero di 
studenti, il numero di studenti con meno di 15 anni e il costo del biglietto.
*******************************************************************************/

#include <stdio.h>


int main()
{
    int n1,n2,costo,importo,gratuità,przn2;
    printf("inserisci il numero di studenti ");
    scanf("%d",&n1);
    printf("inserisci il numero di studenti sotto i 15 anni ");
    scanf("%d",&n2);
    printf("inserisci il costo dei biglietti ");
    scanf("%d",&costo);
    gratuità=(n1+n2)%12;
    przn2=(costo*60)/100;
    importo=(n1*costo)+(przn2*n2)-(gratuità*costo);
    printf("%d",importo);
    return 0;
}