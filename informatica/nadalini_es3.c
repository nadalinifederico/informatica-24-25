/*DATA UNA COPPIA DI NUMERI INTERI COSTRUIRE UN MENÙ TALE CHE
PREVEDA:
1) LA SOMMA IN VALORE ASSOLUTO;
2) LA DIFFERENZA TRA IL MAGGIORE E IL MINORE;
3) GENERATO UN VALORE K(INTERO) DETERMINARE CHI DEI VALORI SI
AVVICINA DI PIÙ;
4) DETERMINARE SE UNO È MULTIPLO DELL’ALTRO.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int n1=0;
    int n2=0;
    int somma=0;
    int differenza=0;
    int scelta;

    srand(time(NULL));
    
    printf("inserici il primo numero");
    scanf("%d", &n1);
    printf("inserici il primo numero");
    scanf("%d", &n1);

    printf("--scegli un operazione--");
    printf("1. LA SOMMA IN VALORE ASSOLUTO");
    printf("2. LA DIFFERENZA TRA IL MAGGIORE E IL MINORE");
    printf("3. GENERATO UN VALORE K(INTERO) DETERMINARE CHI DEI VALORI SI AVVICINA DI PIÙ;");
    printf("4. DETERMINARE SE UNO È MULTIPLO DELL’ALTRO");

    n1=rand()%50+1;
    n2=rand()%50+1;
    printf("%d,%d",n1,n2);

    switch(scelta){
        case 1:
            printf("1. LA SOMMA IN VALORE ASSOLUTO", n1+n2);
            break;
        case 2:
            if(n1<n2){
                printf("scrivi che il primo numero è minore del primo\n");
            }
            if (n1>n2){
                printf("il secondo numero è minore del primo\n");
            }
            else{
                printf("i due numeri sono uguali\n");
            }
            
            printf("2. LA DIFFERENZA TRA IL MAGGIORE E IL MINORE\n", n1/n2);
            break;
        case 3:
            printf("3. GENERATO UN VALORE K(INTERO) DETERMINARE CHI DEI VALORI SI AVVICINA DI PIÙ\n");

    }


}