/*DATO UN NUMERO N POSITIVO NON NULLO MINORE DI 20 E UN NUMERO C(tra
1 e 9) STAMPARE TUTTI I MULTIPLI DI C MINORI DI N.*/

#include <stdio.h>

int main(){
    int n=0;
    int c=0;
    int multiplo=0;

    printf("inserici il primo numero:\n");
    scanf("%d", &n);
    printf("inserici il secondo numero:\n");
    scanf("%d", &c);

    if(n>=1 && n<=20){
        printf("il primo numero va bene \n");
    }else{
        printf("inserici un altro numero\n");
    }

    if(c>=1 && c<=9){
        printf("il numero inserito va bene\n");
    }else{
        printf ("inserici un altro numero\n");
    }
    if(multiplo=c*n){
        printf("il numero è multiplo");
    }else{
        printf("il numero non è multiplo");
    }
    

    



    
}