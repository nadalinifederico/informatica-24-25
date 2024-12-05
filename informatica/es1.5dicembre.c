/*calcolare il quoziente fra due numeri applicando 
il metodo delle sottrazioni sucessive*/

#include <stdio.h>
int main(){
    int n1, n2, temp, quoz=0, resto;

    do{
        printf("inserici il primo valore: ");
        scanf("%d", &n1);
        printf("inserici il secondo valore: ");
        scanf("%d", &n2);
    }while (n1<0 || n2<=0);
    resto=n1;
    if(n1<n2){
        temp=n1;
        n1=n2;
        n2=temp;
    }
    while(resto>=n2){
        resto=resto-n2;
        quoz++;
    }
    printf("il quoziente tra i due numero è %d con resto %d:", quoz, resto);
    
}
