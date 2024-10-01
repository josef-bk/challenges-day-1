#include <stdio.h>
#include<math.h>
int main (){

    int x,y,i,p;
    printf("the number positive n :");
    scanf("%d",&x);
printf("the number pow p :");
    scanf("%d",&p);
   y=1;
    for ( i=1 ; i <=p; i++)

    {
        y =y * x;


    }
   printf(" %d\n",y);

return 0;

}