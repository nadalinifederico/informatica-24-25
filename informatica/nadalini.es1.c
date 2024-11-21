/*GENERATA UNA DATA TRA L’ANNO 2000 E L’ANNO 2024 AD OGGI E SAPENDO
CHE GIACOMO HA 20 GIORNI PER CONSEGNARE IL LAVORO ASSEGNATO
COMUNICARE LA DATA DI CONSEGNA.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    
    int giorno=0;
    int mese=0;
    int anno=0;
    int max,min;
    int bisestile;
    int giornirim;

    
    printf("inserisci il giorno\n: ");
    scanf("%d", &giorno);
    printf("inserisci il mese\n: ");
    scanf("%d", &mese);
    printf("inserisci il anno\n: ");
    scanf("%d", &anno);

    srand(time(NULL));

    giorno=rand()%30+1;
    mese=rand()%11+1;
    anno=rand()%23+1;

    if(anno%100==0){
    if(anno%400==0){
        printf("\nl'anno è bisestile");
        bisestile=1;
        }
    }
    else{
        if(anno%4==0){
            printf("\nl'anno è bisestile");
            bisestile=1;
        }
    }
    



    
}