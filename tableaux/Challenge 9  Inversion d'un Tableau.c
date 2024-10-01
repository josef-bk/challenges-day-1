#include <stdio.h>

int main() {
  int i;
  int taille;
           printf("entrer la taille de tableau :");
               scanf("%d",&taille);
    
  int tab[taille];
    
      for(i = 0 ;i < taille; i++){
          printf("entre les element de tableau :");
               scanf("%d",&tab[i]);
  }
      for(i = 0;i < taille/2 ; i++){
  int    temp=tab[i];
         tab[i]=tab[taille -i-1];
         tab[taille-i-1]=temp;
  }
      for(i=0;i<taille;i++){
          printf("%d\n",tab[i]);
  }
    return 0;
  }