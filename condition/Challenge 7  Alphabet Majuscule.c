#include <stdio.h>
 int main(){
     char x;
     printf("give me alphabet i will tell you if alphabet is uppercase or lowercase : ");
     scanf("%c",&x);
     if( 65 <= x && x <= 90)
     printf("the alphabet is uppercase .");
     else
     printf("the alphabet is lowercase .");
 }