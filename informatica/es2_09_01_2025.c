/*scrivi un programma che dati in input n numeri interi
e un numero x, determini:
- quanti numeri sono maggiori di x
- quanti numeri sono minori di x
- quanti numeri sono uguali a x */

#include <stdio.h>
int main(){
    int n, x, f;
    int cntmaggiori=0, cntminori=0, cntuguale=0;
    
    printf("inserici il numero n: ");
    scanf("%d", &n);
    printf("inserici il numero x: ");
    scanf("%d", &x);

    for(int i=0; i<=n; i++){
        printf("inserici un numero: ");
        scanf("%d", &f);
        if(f>x){
            cntmaggiori++;
        }else if(f<x){
            cntminori++;
                
        }else{
            cntuguale++;
        }
    }
    printf("il numero maggiore è %d:", cntmaggiori);
    printf("il numero minore è %d:", cntminori);
    printf("il numero uguale è %d:", cntuguale);
}