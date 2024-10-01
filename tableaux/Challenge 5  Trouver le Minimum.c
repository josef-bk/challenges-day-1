#include <stdio.h>

int main() {
    int x, y;
    int i, min;
    printf("je vous demande le nombre d'élèments  : ");
    scanf("%d",&x);
    int tbls[x];
    for(i=0;i<x;i++){
    printf("les éléments du tableau : ");
    scanf("%d",&y);
    tbls[i]=y;
}
 min=tbls[0];
for(i=0;i<x;i++){
    if(min>tbls[i]){
   min=tbls[i];
   
}
}
printf("le plus petit élément dans le tableau : %d\n",min);

    return 0;
}