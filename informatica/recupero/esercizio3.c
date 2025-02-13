/*stampare i divisori pari di una sequenza  di numeri, 
termina non appena si inserice uno 0*/
#include <stdio.h>
int main(){
    int n=0;
    int resto=0;
    int quoziente=0;

    do{
        do{
            printf("inserici una serie di numeri: ");
            scanf("%d", &n);
        }while(n<0);
        if(n!=0){
            /*calcoliamo i divisori di n*/
            printf("i divisori pari di %d sono: \n", n);
            for(int i=1; i<=n; i++){
                if(n%i==0 && i%2==0){
                printf("%d - \n", i);
                }
            }
        }
        
    }while(n!=0);
    return 0;
}