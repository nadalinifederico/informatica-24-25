/*dati n numeri in input (con n richiesto dall utente maggiore di 5), calcolare e 
mostrare la somma dei numeri negativi e dei numeri positivi*/

#include <stdio.h>
int main(){
    int n, num, somma=0, somman=0;
    do{
        printf("inserici un numero: ");
        scanf("%d", &n);
    }while(n<=5);
    
    for(int i=0; i<n; i++){
        printf("inserici un altro numero: ");
        scanf("%d", &num);
        if(num>=0){
            somma=somma+num;
        }else{
            somman=somman+num;
        }
    }
    printf("la somma dei numeri positivi è %d e quella dei negativi è %d", somma, somman);
}
