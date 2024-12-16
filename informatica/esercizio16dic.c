/*caclolare la somma dei primi numeri naturali
es: 5 1+2+3+4+5*/

#include <stdio.h>
int main(){
    int n=0;
    int somma=0;

    printf("inserici un numero: ");
    scanf("%d", &n);

    for(int i=0; i<=n; i++){
        somma=somma+i;
    }
    printf("la somma dei numeri è %d", somma);
}