/*Scrivi un programma che effettua il calcolo della media dei voti della pagella,
 inserendoli uno alla volta e chiedendo a ogni inserimento di un numero se i voti 
 da inserire sono terminati accettando come risposta S oppure N*/
 #include <stdio.h>
 int main(){
    char uscita;
    int media=0;
    int voto=0;
    int temp=0;
    int cnt=0;
    
    do{
        cnt++;
        printf("inserici un voto: ");
        scanf("%d", &voto);
        printf("I voti da inserire sono terminati S/N:");
        scanf(" %c", &uscita);
        temp+=voto;
        //printf("il valore di temp è: %d - %d\n", temp,cnt);
    }while(uscita != 'S' && uscita != 's');
    media=temp/cnt;
    printf("la media è: %d", media);
 }