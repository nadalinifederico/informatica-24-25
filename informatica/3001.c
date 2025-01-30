/*ricerca i primi 3 numeri perfetti*/
#include <stdio.h>

int somma_divisori(int _n);

int main(){
	int n= 1, somma=0, cnt=1;
    while(cnt<=3){
        n ++;
        somma=somma_divisori(n);
        if(somma != 0){
            printf("trovato numero perfetto: %d\n", somma);
            cnt++; 
        }
    }
}

int somma_divisori(int _n){
    int somma=0;
    for(int i=1; i<_n; i++){
        if(_n%i==0 || _n/i== _n){
            somma+=i;
        }
    }
    if (somma==_n){
        return somma;
    }
    return 0;
}

