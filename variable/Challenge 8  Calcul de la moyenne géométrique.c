#include <stdio.h>
#include <math.h>
int main(){
   float a, b , c ;
   float mg ;
   printf("donner le nombre a : ");
   scanf("%f",&a);
   printf("donner le nombre b : ");
   scanf("%f",&b);
   printf("donner le nombre c : ");
   scanf("%f",&c);
  
   mg = pow(a * b * c,1/3) ;
   printf(" la moyenne géométrique de trois nombre : %.2f",mg);
   return 0 ;
   
}
