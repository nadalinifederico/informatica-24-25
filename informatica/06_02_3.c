#include <stdio.h> 
const float PI=3.14; 
void calcolo(float *_raggio); 

int main(){ 
    float raggio=0; 
    do{ 
        printf("inserici il raggio: "); 
        scanf("%f", &raggio); 
    }while(raggio<=0); 
    calcolo(&raggio);
    return 0; 
} 
void calcolo(float *_raggio){ 
    float _area=0, _circonferenza=0;
    _circonferenza=2* *_raggio *PI; 
    _area=*_raggio* *_raggio* PI;
    printf(" la circonferenza è di: %f\n", _circonferenza);
    printf("area è di: %f\n",_area);
}