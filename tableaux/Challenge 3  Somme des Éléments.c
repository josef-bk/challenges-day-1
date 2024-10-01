#include <stdio.h>

int main() {
  int x;
  int i;
  int somme=0;
 printf("donner le nombre des element pour le tableau : ");
            scanf("%d",&x);
  int tab[x];
for(i = 0; i < x ; i++){
      printf(" saisi les element : "),
      scanf("%d",&tab[i]);
      
}
for(i = 0; i < x ; i++){
   somme+= tab[i];

}
      printf("%d\n",somme); 

    return 0;
}