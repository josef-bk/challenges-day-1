#include <stdio.h>
int main() {
    float a;
    printf("écrit votre numer : ");
    scanf("%f",&a);
    if (a < 0)
    printf("votre numéro est négatif.");
    
    else if (a > 0)
    printf("votre numéro est posétif");
    
    else
        printf("le nombre est égal a zéro");
    
}

