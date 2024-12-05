/*dati n numeri, sommarli 4 a 4 termina non appena si introduce uno 0*/

#include <stdio.h>
int main(){
    int num, cnt=0, somma=0;

    do{
        printf("inserici un numero: ");
        scanf("%d", &num);
        cnt++;
        somma=somma+num;
        if(cnt%4==0 && cnt!=0){
            printf("la somma è %d", somma);
            scanf("%d", &somma);
            somma=0;
        }
    } while(num!=0);
    printf("hai inserito uno 0. il programma termina ");
    
}