#include <stdio.h>
#include <math.h>
  int main() {
      
     float a,b,c,DELTA,x1,x2,x3;
     
 
     printf("entrer la valeur de a: ");
       scanf("%f",&a);
       printf("entrer la valeur de b : ");
         scanf("%f",&b);
         printf("entrer la valeur de c : ");
           scanf("%f",&c);
           
            DELTA = ((b*b)-4*(a*c));
            
     if(DELTA>0){
         x1 = (-b + sqrt(DELTA))/(2*a);
         x2 = (-b - sqrt(DELTA))/(2*a);
         printf(" LA SOLITION EST  : %.2f  %.2f ",x1,x2);
         
     }else if (DELTA==0){
         x3 = (-b)/(2*a);
         printf(" LA SOLITION EST  :%.2f ",x3);
         
     }
     else  {
         printf(" LA SOLITION EST  : ");
         
     }
  

return 0; 

}