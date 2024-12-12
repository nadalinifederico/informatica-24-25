/*progettare un algoritmo che legga un numero b<a
e scriva quante volte a è divisibile per b.
es a=162 e b=3 a è divisibile 4 volte per b*/

#include <stdio.h>
int main(){
    int a, b, q, r;
    int cont=0;
    do{
        printf("inserici il primo valore: ");
        scanf("%d", &a);
        printf("inserici il secondo valore: ");
        scanf("%d", &b);
    }while(a<b);

    q=a;
    while(q>b && r!=0){
        if(q%b==0){
            r=q%b;
            cont++;
            q=q/b;
        }
    }
    printf("il numero è divisibile per %d volte", cont);
    

}