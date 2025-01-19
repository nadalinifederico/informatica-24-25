/*Scrivi un programma che esegue il calcolo del fattoriale di un numero num inserito.+
Ad esempio, il "4!" darà come risultato "4 x 3 x 2 x 1 = 24" 
ed il "9!" è uguale a "9 x 8 x 7 x 6 x 5 x 4 x 3 x 2 x 1 = 362.880"*/
#include <stdio.h>
int main(){
    int num=0;
    int risultato=0;
    int valore=0;

    do{
        printf("inserisci un numero: ");
        scanf("%d", &num);
    }while(num<=0);
    valore=num-1;
    risultato=num;
    for(valore; valore>=1; valore--){
        risultato*=valore;
    }
    printf("il fattoriale di %d è: %d\n", num, risultato);
}