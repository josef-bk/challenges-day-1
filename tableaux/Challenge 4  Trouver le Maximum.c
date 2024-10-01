#include <stdio.h>

int main() {
    int x, y;
    int i, max;
    printf("je vous demande le nombre d'élèments  : ");
    scanf("%d",&x);
    int tbls[x];
    for(i=0;i<x;i++){
    printf("les éléments du tableau : ");
    scanf("%d",&y);
    tbls[i]=y;
}
 max=tbls[0];
for(i=0;i<x;i++){
    if(max<tbls[i]){
   max=tbls[i];
   
}
}
printf("le plus grand élément dans le tableau : %d\n",max);
 

    return 0;
}