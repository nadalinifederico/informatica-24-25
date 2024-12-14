/*dati in input 10 numeri interi 
determinare il valore maggiore e quante volte compare*/

#include <stdio.h>
int main(){
    int n=0;
    int max=0;
    int cntn=0;

    for(int i=0; i<10; i++){
        printf("inserici un valore: ");
        scanf("%d", &n);
        if(n>max){
            cntn=1;
            max=n;
        }else if(n==max){
            cntn++;
        }
    }
    printf("il valore maggiore è %d e compare %d volte", max, cntn);

}