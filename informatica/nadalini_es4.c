/*VERIFICARE SE UN NUMERO È POTENZA DEL 2 E SE LO È DETERMINARE
L’ESPONENTE.*/
#include <stdio.h>

int main() {
    int n;

    printf("Inserisci un numero: ");
    scanf("%d", &n);

        if (n <= 0){
        printf("Il numero non è una potenza di 2.\n");
        }
         else if (n == 1){
        printf("Il numero è una potenza di 2 esponente è:");
        }
         else if (n == 2){
        printf("Il numero è una potenza di 2 esponente è:");
        }
         else if (n == 4){
        printf("Il numero è una potenza di 2 esponente è:");
        }
        else if (n == 8){
        printf("Il numero è una potenza di 2. esponente è:");
        }
        else if (n == 16){
        printf("Il numero è una potenza di 2 esponente è:");
        }
        
        else {
        printf("Il numero non è una potenza di 2");
        }
}   