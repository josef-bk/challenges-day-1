#include <stdio.h>



int main() {
    int nombre;

   
    printf("Entrez un nombre entier : ");
    scanf("%d", &nombre);

    if (nombre % 2 == 0) {
        printf(" nombre pair.\n"); 
        
    } else {
        printf(" nombre impair.");
    }

    return 0;


}