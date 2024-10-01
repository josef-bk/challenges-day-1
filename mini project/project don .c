
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100

int main() {
 
   char titre[MAX][100];
   char auteur[MAX][100];
   float prix[MAX].
int quantité[MAX];
int nombre = 0, choix;
    do
    {
        printf("1. ajouter des livres\n");
        printf("2. afficher tous les livres");
        printf("3.Rechercher un livre par son titre");
        printf("4, mettre à jour la quantité des livres");
        printf("5.Supprimer un livre du stock.");
        printf("6.Afficher le nombre total de livres en stock");
        printf("7.quitté");
        printf("choix ? : ");
        scanf("%d",&choix);
    switch(choix){
        case 1:
           system("cls");
int ajouter(){
     
        printf("entrer le nombre de livres a ajouter : ");
        scanf("%d",ajouter);
        printf("================== ajouter ==================\n");
     
     
    for (int i = nombre;i < nombre + ajouter; i++ ){
         
     
         printf("Titre : ");
         scanf("%[^\n]",titre[i]);
         printf("Auteur : ");
         scanf("%[^\n]"auteur[i]);
         printf("Prix : ");
         scanf("%f",prix[i]);
         printf("Quantité");
         scanf("%f",quantité[i]);
         printf("\n");
     } 
     nombre += ajouter ;
     
     Affichage()
     
           system("cls");
     if (nombre==0){
         printf("aucun livre dans le stock . "); 
     }      
    else {
        
         printf("============= Affichage de stock =============\n");
    for(int i=0;i<nombre;i++){
        printf("titre : %s\n",titre[i]);
        printf("auteur : %s\n",auteur[i]);
        printf("Prix : %f\n",prix[i]);
        printf("Quantite : %d\n",quantité[i]);
        printf("\n");
       }
      }
     }
void chercher(){
    
           system("cls");   
    char chercher[100];
    // int found = 0;
         printf("============= chercher un livre =============\n");
         printf("titre : ");
         scanf("%[^\n]", chercher);
    
    for (int i = 0 ; i < nombre ; i++ ){
     if(strcmp(titre[i],chercher)==0){
          printf("============= livre est trouver =============\n");
           printf("titre : %s\n",titre[i]);
        printf("auteur : %s\n",auteur[i]);
        printf("Prix : %f\n",prix[i]);
        printf("Quantite : %d\n",quantité[i]);
        return ;
          }
        }
        printf("============= livre n'est pas trouver =============\n");
      } 
void modif(){
           system("cls");   
           char chercher[100];
           int found = 0;
        printf("============= chercher un livre =============\n");
        printf("titre : ");
         scanf("%[^\n]", chercher);
    
    for (int i = 0 ; i < nombre ; i++ ){
     if(strcmp(titre[i],chercher)==0){
        printf("============= livre est trouver =============\n");
        printf("titre : %s\n",titre[i]);
        printf("auteur : %s\n",auteur[i]);
        printf("Prix : %f\n",prix[i]);
        printf("Quantite : %d\n",quantité[i]);
        found = 1;
        printf("============= Modification =============\n");
int modif; 
        printf("Donner la nouvelle quantité : ");
        scanf("%d",&modif);
     quantite[i] = modif;
          }
        }       
        if(!found)
         printf("Livre n'est pas trouver .");
     }
void supp () 
      system("cls");  
      system("cls");   
char chercher[100];
int found = 0;
        printf("============= Suprrimer =============\n");
        printf("titre : ");
        scanf("%[^\n]", chercher);
    
    for (int i = 0 ; i < nombre - 1 ; i++ ){
    }
    if(strcmp(titre[i],chercher)==0){
     }
    found = 1;
    for (int j = 0 ; j < nombre - 1 ; j++ ){
       strcmp(titre[i],titre[j + 1]);
       strcmp(auteur[i],auteur[j + 1]);
       prix[j] = prix[j + 1];
       quantite[j] = quantite[i + 1];
       printf("livre a été supprimer");
      }
    }
  }
 void livres(){
       system("cls");
       printf("Le nombre total des livres est : %d",nombre);
  }
 int main(){
     do{
        
        printf(\n)
        printf("1. ajouter des livres\n");
        printf("2. afficher tous les livres");
        printf("3.Rechercher un livre par son titre");
        printf("4, mettre à jour la quantité des livres");
        printf("5.Supprimer un livre du stock.");
        printf("6.Afficher le nombre total de livres en stock");
        printf("7.quitté");
        printf("choix ? : ");
        scanf("%d",&choix);
    switch(choix){
        case 1:{
            ajouter();
        }
        break;
        
        case 2:{
            affichage();    
        }
         break;
         
         case 3{
             chercher();
         }
          break;
          
         case 4{
             modification();
         }
          break;
         
         case 5{
             supp();
         }
          break;
          
         case 6 {
             livres();
         }
          break;
          
         case 7{
             system("cls");
             return 1;
         }
          break;
          
          default:
             system("cls");
             printf(" Choix n'est pas validé");
          break;
         }
       }
       while (choix != 7 );
       return 0 ;
         
     }
 
     