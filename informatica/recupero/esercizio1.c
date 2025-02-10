/*chiesti 10 valori calcola la media*/
#include <stdio.h>
int main(){
    int n=0, somma=0;
    float media;
    for(int i=1; i<=10; i++){
        printf("inserisci un numero: ");
        scanf("%d", &n);
        somma+=n;
    }
    media=(float)somma/10;
    printf("la media vale %0.2f: ", media);
}