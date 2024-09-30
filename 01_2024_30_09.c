//DATI  DUE  NUMERI  A  e  B  VERIFICARE  SE  A  è  IL  QUADRATO  DI  B.
#include <stdio.h>
int main()
{
    float num1=0;
    float num2=0;
    float quadrato=0;
    printf("inserici il primo numero\t");
    scanf("%f",&num1);
    printf("inserici il secondo numero\t");
    scanf("%f",&num2);
    quadrato=num2*num2;
    printf("il quadrato è: %f \n", quadrato);
    if(quadrato==num1)
    {
        printf("%f è il quadrato di  %f",num1,num2);
    }
    else
    {
        printf("%f non è il quadrato di %f",num1,num2);
    }

}