/*Si scriva un programma in C che letto un numero intero visualizzi 
il quadrato del numero utilizzando il metodo delle somme successive. 
Il quadrato di un numero può essere scritto come la somma dei primi
N numeri dispari*/
#include <stdio.h>

void quadrato(int _n, int _somma);
int main(){
    int n, somma=0;
    do{
        printf("inserici un numero: ");
        scanf("%d", &n);
    }while(n<=0);
    quadrato(n, somma);
    printf("il qudrato di %d é %d ", n, somma);
    return 0;
}
void quadrato(int _n, int _somma){
    int dispari=1;
    for(int i=1; i<=_n; i++){
        printf("%d\t", dispari);
        _somma+=dispari;
        dispari+=2;
    }
}