/*verifica se un anno è bisestile*/
#include <stdio.h>
void bisestile(int _anno);
int main(){
    int anno;
    do{
        printf("inserici l'anno: ");
        scanf("%d", &anno);
    }while(anno<=0);
    bisestile(anno);
    return 0;
}

void bisestile(int _anno){
    if (_anno%4==0 && _anno%100!=0 || _anno%400==0){
        printf("%d è un'anno bisestile.\n",_anno);
    }
    else{
        printf("%d non è un'anno bisestile.\n",_anno);
    }
}