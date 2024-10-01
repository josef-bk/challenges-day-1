#include <stdio.h>

 int main() {
 int taille; 
 int i,j;
 int tmp;
   
    printf("donner le nombre d'éléments : ");
    scanf("%d",&taille);
     int tab[taille];
 for(i=0;i<taille;i++){
     printf("entrer les elements vous-voules :");
     scanf("%d",&tab[i]);
 }
    
     for(i=0;i<taille;i++){
     for(j=i+1;j<taille;j++)
         if (tab[i]>tab[j]){
             tmp = tab[j];
             tab[j] = tab[i];
             tab[i] = tmp;
    }
         printf("le tab en ordre croissant : %d\n",tab[i]);

     }
      
 
    return 0 ;
}