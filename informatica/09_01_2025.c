/*scrivi un programma che ricerca i primi tre numeri perfetti
e li visualizza sullo schermo
ES: n=6 div=1+2+3=6
6 - 28 - 496*/

#include <stdio.h>
int main(){
    int sommadivisori=0;

    for(int i=1; i<=500; i++){
        for (int j=1; j<=i/2; j++){
            if (i%j==0){
                sommadivisori=sommadivisori+j;
                
            }
            
            
        }
        if(sommadivisori==i){
                    printf("il numero %d è un  numero perfetto", i);
        }
        sommadivisori=0;
        
    }
    
}