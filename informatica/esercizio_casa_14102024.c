/*Il programma letti tre numeri, determini se possono essere considerati in progressione aritmetica;
 una progressione aritmetica è una serie di numeri in cui la differenza tra due numeri successivi è costante.*/
 #include <stdio.h>
 int main(){
    int n1,n2,n3;
    printf("inserici i 3 valori:");
    scanf("%d%d%d", &n1,&n2,&n3);
    if(n1+n2==0 && n2+n3==0){
        printf("i 3 numeri sono in progressione aritmetica");
    }
    else{
        printf("i 3 numeri sono in progressione aritmetica");
    }
 }