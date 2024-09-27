#include <stdio.h>

int main()
{
    float n1,n2,prezzodocenti;
    printf("inserisci il numero di studenti ");
    scanf("%f",&n1);
    prezzodocenti=(12/2)*2;
    n2=12*n1+prezzodocenti;
    printf("%f",n2);
    
    return 0;
}