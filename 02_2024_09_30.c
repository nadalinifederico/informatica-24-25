//STABILIRE SE DATI DUE NUMERI A e B CONTROLLARE SE A è MINORE, UGUALE o MAGGIORE DI B
#include <stdio.h>
int main()
{
    float a=0;
    float b=0;
    printf("inserici un valore: ");
    scanf("%f", &a);
    printf("inserici un altro valore: ");
    scanf("%f", &b);
    if (a==b)
    {
        printf("i due valori sono uguale");
    }
    else
    {
        if(a>b)
        printf("%.2f è maggiore di %.2f",a,b);
        else{
            printf("%.2f è minore di %.2f",a,b);
        }
    }
}