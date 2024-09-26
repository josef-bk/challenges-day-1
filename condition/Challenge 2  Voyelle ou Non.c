#include <stdio.h>
int main(){
char caractère;
printf("veuiller saisir un caractère : ");
scanf(" %c", &caractère);
switch(caractère){
case 'a':
case 'i':
case 'e':
case 'o':
case 'u':
case 'A':
case 'I':
case 'E':
case 'O':
case 'U':
 printf("%c est une voyelle.\n", caractère);
 break;
 default:
 printf("%c n'est pas une voyelle.\n", caractère);
    }
}