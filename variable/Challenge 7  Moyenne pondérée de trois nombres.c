#include <stdio.h>
int main(){
   float a, b , c ;
   float s , rs ;
   printf("donner le nombre a : ");
   scanf("%f",&a);
   printf("donner le nombre b : ");
   scanf("%f",&b);
   printf("donner le nombre c : ");
   scanf("%f",&c);
   s = a + b + c ;
   rs = s/3 ;
   printf(" la moyenne pondérée de trois pondération %.2f ",rs);
   return 0 ;
   
}
