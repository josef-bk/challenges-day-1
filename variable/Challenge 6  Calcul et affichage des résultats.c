#include <stdio.h>
int main(){
    float a, b ;
    char operateur;
    printf("donner le nombre a :");
  scanf("%f",&a);
  printf("donner le symbol de calcul:");
  scanf(" %c",&operateur);
  printf("donner le nombre b:");
  scanf("%f",&b);
  switch (operateur){
      
      case '+' : printf("a + b = %.2f ",a+b);
      break;
      case '-' : printf("a - b = %.2f ",a-b);
      break;
      case '*' : printf("a * b = %.2f ",a*b);
      break;
      case '/' : printf("a / b = %.2f ",a/b);
      break;
      
  }
  }
