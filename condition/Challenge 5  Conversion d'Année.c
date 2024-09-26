#include <stdio.h>
int main (){
int an , menu ;
int mois, jours, houres, minutes, secondes;
printf("saisir le nombre d'année que vous vouler convertir :");
scanf("%d",&an);
printf(" 1- mois\n");
printf(" 2- jours\n");
printf(" 3- heures\n");
printf(" 4- minutes\n");
printf(" 5- secondes\n");
printf("choisir d'après le menu :");
scanf("%d",&menu);

switch (menu){
    case 1:
    mois= an*12;
    printf("d'apres votre chois du mois :%d",mois);
    break;
    case 2:
    jours= an*12*30;
    printf("d'apres votre chois de jours :%d",jours);
    break;
    case 3:
    houres= an*12*30*24;
    printf("d'apres votre chois de jours :%d",houres);
    break;
    case 4:
    minutes=an*12*30*24*60;
    printf("d'apres votre chois de jours :%d",minutes);
    break;
    case 5:
    secondes=an* 31536000;
    printf("d'apres votre chois de jours :%d",secondes);
default:
break;

    
}
}