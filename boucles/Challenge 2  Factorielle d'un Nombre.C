#include <stdio.h>

int main() {
  int n, y=1 ;
  printf("donner un nombre entier positif : ");
     scanf("%d",&n);
     for(int i=1 ; i <= n ; i++ )
     {
        y=y*i;
        
       printf("%d\n",y);
     }
    
}