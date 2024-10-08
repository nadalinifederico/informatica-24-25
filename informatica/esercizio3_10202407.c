/*dato un numero a più cifre stampare 
le cifre che compongono il numero*/

#include <stdio.h>
int main(){
    int num=0;
    int r=0;
    int q=0;
    int cifra1=0;
    int cifra2=0;
    int cifra3=0;
    
    printf("inserici il numero:");
    scanf("%d", &num);

    q=num/10;
    r=num%10;
    cifra1=q;

    printf("la prima cifra è: %d", cifra1);
    
    q=num/100;
    r=num%10;
    cifra2=q;

    printf("la seconda cifra è: %d", cifra2);
    
    q=num/1000;
    r=num%10;
    cifra1=q;

    printf("la terza cifra è: %d", cifra3);



}