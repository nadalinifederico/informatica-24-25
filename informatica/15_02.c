/*calcola il cubo di un numero inserito dall'utente usando una funzione */
#include <stdio.h>
long int cubo(int _num);
int main(){
    int n=0;
    long risultato;
    do{
        printf("inserici un numero: ");
        scanf("%d", &n);
    }while(n<=0);
    risultato=cubo(n);
    printf("il cubo di %d è %ld\n", n, risultato);
    return 0;
}
long int cubo(int _num) {
    long risultato;
    risultato=_num*_num*_num;
    return risultato;
}