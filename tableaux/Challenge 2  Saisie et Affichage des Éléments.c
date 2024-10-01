#include <stdio.h>

int main() {
  int x,y ;
  int i;
  
 printf("donner le nombre des element pour le tableau : ");
            scanf("%d",&x);
  int tab[x];
for(i = 0; i < x ; i++){
      printf(" saisi les element  :  ", i + 1);
      scanf("%d",&y);
      tab[i]=y;
}
for(i = 0; i < x ; i++){
    printf("%d\n",tab[i]);
}

   
    return 0;
}