#include <stdio.h>

int main(){
    float km, yards;
    const float x = 1093.61;
//demande 
printf("entrer la distance en kilomètres:");
scanf("%f",&km);
//formule
yards = km * 1093.61;
//resulta
printf("resulta en yards est :%.1f Yards\n ",yards);

return 0;
}