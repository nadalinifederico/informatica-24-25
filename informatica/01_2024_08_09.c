/*data una data in formato gg mm aaaa
verificare se la data è accettabile*/
#include <stdio.h>
int main(){
    int giorno=0;
    int mese=0;
    int anno=0;
    int bisestile=0;

    printf("inserisci il giorno: ");
    scanf("%d", &giorno);
    printf("inserisci il mese: ");
    scanf("%d", &mese);
    printf("inserisci il anno: ");
    scanf("%d", &anno);


    /*un anno è bisestile 
    se è multiplo di 4 ma non di 100 e 400*/
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
    //controllo mese e del giorno
    if (mese>=1 && mese<=12){
        if(mese==2){
            if(giorno>=1 && giorno<=28+bisestile){
                printf("\nla data è accettabile");
            }
            else{
                printf("\nla data non è accettabile");
            }
        }
        else{
            if(mese==11 || mese==4 || mese==6 || mese==9){
                if(giorno>=1 && giorno<=30){
                    printf("\nla data è accettabile");
                }
                else{
                    printf("\nla data non è accettabile");
                }
            }
            else{
                if(giorno>=1 && giorno<=31){
                    printf("\nla data è accettabile");
                }
                else{
                    printf("\nla data non è accettabile");
                }
            }
        }
    }

}