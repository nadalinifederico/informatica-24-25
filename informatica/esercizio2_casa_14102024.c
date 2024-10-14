/*Il programma legge tre numeri e dice se possono essere le lunghezze dei lati di un triangolo
 (perché un triangolo possa essere tale la somma di ogni coppia lati deve essere maggiore dell’altro)*/
 #include <stdio.h>

int main() {
    float a, b, c;

    printf("Inserisci il primo lato: ");
    scanf("%f", &a);
    printf("Inserisci il secondo lato: ");
    scanf("%f", &b);
    printf("Inserisci il terzo lato: ");
    scanf("%f", &c);

    
    if (a + b > c && a + c > b && b + c > a) {
        printf("I numeri possono formare un triangolo.\n");
    } else {
        printf("I numeri non possono formare un triangolo.\n");
    }

    return 0;
}