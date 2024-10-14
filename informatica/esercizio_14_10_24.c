/*DATE DUE DATE ESPRESSE IN g, m, a DETERMINARE LA DATA PIU' RECENTE. 
Esempio:  tra la data 5/07/2024 e  14/07/2024  la più recente è il 14/07/2024.*/
#include <stdio.h>
int main(){
    int mese1=0;
    int giorno1=0;
    int anno1=0;
    int mese2=0;
    int giorno2=0;
    int anno2=0;
    int piurecente=0;
    int menorecente=0;
    int bisestile=0;

    printf("inserisci il giorno1: ");
    scanf("%d", &giorno1);
    printf("inserisci il mese1: ");
    scanf("%d", &mese1);
    printf("inserisci il anno1: ");
    scanf("%d", &anno1);

    printf("inserisci il giorno2: ");
    scanf("%d", &giorno2);
    printf("inserisci il mese2: ");
    scanf("%d", &mese2);
    printf("inserisci il anno2: ");
    scanf("%d", &anno2);


    if (mese1>=1 && mese1<=12){
    if(mese1==2){
        if(giorno1>=1 && giorno1<=28+bisestile){
            printf("\nla data è accettabile");
        }
        else{
            printf("\nla data non è accettabile");
        }
    }
    else{
        if(mese1==11 || mese1==4 || mese1==6 || mese1==9){
            if(giorno1>=1 && giorno1<=30){
                printf("\nla data è accettabile");
            }
            else{
                printf("\nla data non è accettabile");
            }
        }
        else{
            if(giorno1>=1 && giorno1<=31){
                printf("\nla data è accettabile");
            }
            else{
                printf("\nla data non è accettabile");
                }
            }
        }
    }

    if (mese2>=1 && mese2<=12){
    if(mese2==2){
        if(giorno2>=1 && giorno2<=28+bisestile){
            printf("\nla data è accettabile");
        }
        else{
            printf("\nla data non è accettabile");
        }
    }
    else{
        if(mese2==11 || mese2==4 || mese2==6 || mese2==9){
            if(giorno2>=1 && giorno2<=30){
                printf("\nla data è accettabile");
            }
            else{
                printf("\nla data non è accettabile");
            }
        }
        else{
            if(giorno2>=1 && giorno2<=31){
                printf("\nla data è accettabile");
            }
            else{
                printf("\nla data non è accettabile");
                }
            }
        }
    }

    /*5/2/2005
     12/5/2001*/

    if(anno1>anno2){
        printf("la data1 è più recente dell data2");
    }
    else{
        if(anno1<anno2){
            printf("la data1 è meno recente dell data2");
        }
        else{//in questo caso i due anni sono uguali
            if(mese1>mese2){
                printf("il data1 è più recente del data2");
            }
            else{
                if(mese1<mese2){
                    printf("il data1 è meno recemte del data2");
                }
                else{//in questo caso i due anni e i due mesi sono uguali
                    if(giorno1>giorno2){
                        printf("il data1 è più recente del data2");
                    }
                    else{
                        if(giorno1<giorno2){
                            printf("il data1 è meno recemte del data2");
                        }
                        else{
                            printf("le due date sono uguali");
                        }
                    }
                }
            }
        }
    }

    
}