/*Scrivi un programma che effettua il prodotto tra due numeri
utilizzando il metodo delle somme successive dopo aver controllato l’input e accettato solo valori maggiori di 0.*/

#include <stdio.h>
int main(){
    int n1=0;
    int n2=0;
    int prodotto=0;

    printf("inserici il primo numero: ");
    scanf("%d", &n1);
    printf("inserici il secondo numero: ");
    scanf("%d", &n2);

    if(n1<=0){
        printf("inserici un altro numero");
        scanf("%d", &n1);
    }
    if(n2<=0){
        printf("inserici un altro numero");
        scanf("%d", &n2);
    }

        for(int i=1; i<=n2; i++){
            prodotto += n1;
        }
        printf("il prodotto tra %d e %d è: %d\n", n1,n2,prodotto);
}