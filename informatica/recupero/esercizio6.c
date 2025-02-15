/*data una sequenza di numeri 
determinare quali sono i numeri 
perfetti ilprogramma termina quando 
il numero perfetto supera una certa soglia*/
#include <stdio.h>
int main(){
    int n, k, sum=0;
    int perf=0;

    do{
        printf("inserici una serie di numeri: ");
        scanf("%d", &n);
    }while(n<=0);
    do{
        printf("inserici il valore della soglia: ");
        scanf("%d", &k);
    }while(k<=0);

    do{
        for(int i=1; i<n; i++){
            if(n%i==0){
                sum+=i;
            }
        }
        if(sum==n){
            printf("il numero è perfetto");
        }else{
            printf("il numero non è perfetto");
        }
    }while();

}