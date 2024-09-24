#include <stdio.h>

int main(){
    float km, ms;
    const float x = 0.27778;
//demande 
printf("entrer la distance en km/h:");
scanf("%f",&km);
//formule
ms = km  * 0.27778;
//resulta
printf("resulta en m/s est :%.3f m/s\n ",ms);

return 0;
}