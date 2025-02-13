/*dati 4 valori stampre i numeri primi*/
#include <stdio.h>
int main(){
    int n=0;
    int cnt=0;
    
    for(int i=1; i<=4; i++){
        do{
            printf("inserici il valore: ");
            scanf("%d",&n);
        }while(n<=0);
        for(int j=2; j<n; j++){
            if(n%j==0){
                cnt++;
            }
        }
        if(cnt!=0){
            printf("il numero %d non è primo\n", n);
        }else{
            printf("il numero %d è primo\n", n);
        }
        cnt=0;
    }

}