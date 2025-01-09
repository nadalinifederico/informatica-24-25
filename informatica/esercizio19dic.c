/*dato un numero n calcolare il suo quadrato
sommando i primi n numeri dispari
es: n=7  7^2=49 
1 3 5 7 9 11 13*/
#include <stdio.h>
int main(){
    int n, quadrato=0;
    do{
        printf("inserici un numero: ");
        scanf("%d", &n);
    }while(n<0);

    for(int i=1; i<=n*2; i+=2){
        quadrato=quadrato+i;
    }
    printf("il quadrato di %d è: %d ", n, quadrato);
    
}  