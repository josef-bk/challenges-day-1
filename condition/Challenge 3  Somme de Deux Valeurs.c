#include <stdio.h>
int main(){
int a, b;
printf("entrer la premier valeur :");
scanf("%d", &a);
printf("entrer la deuxieme valeur :");
scanf("%d",&b);
int somme;
if (a == b){
    somme = 3 * (a + b);
} else {
    somme = a + b;
}
     printf("Le résultat est: %d\n", somme);
     
    return 0 ;
}