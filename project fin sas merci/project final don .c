#include <stdio.h>
#include <string.h>

#define MAX_RESERVATIONS 100
#define LONGUEUR_MAX_DU_NOM 50
#define LONGUEUR_MAX_DE_NUM 15

typedef struct {
    int reference;
    char nom[LONGUEUR_MAX_DU_NOM];
    char prenom[LONGUEUR_MAX_DU_NOM];
    char telephone[LONGUEUR_MAX_DE_NUM];
    int age;
    char statut[15];
    char date[11];
} Reservation;

Reservation RES[MAX_RESERVATIONS] = {
    {1, "hakim", "tarzan", "076487213", 20, "valide", "12/12/2024"},
    {2, "hamza", "lemch3kk", "076487213", 11, "reporte", "12/1/2024"},
    {3, "mohamed", "azemor", "076487213", 22, "valide", "12/11/2024"},
    {4, "rayan", "lmaafer", "076487213", 18, "traite", "12/4/2025"},
    {5, "abdoljbar", "lmkawar", "076487213", 12, "annule", "12/20/2024"},
    {6, "kawtar", "slawi", "076487213", 36, "reporte", "1/10/2024"},
    {7, "kamal", "lkilo", "076487213", 56, "reporte", "29/11/2024"},
    {8, "ilyas", "elmalki", "076487213", 47, "traite", "1/3/2025"},
    {9, "fetom", "oum rayan", "076487213", 18, "valide", "23/11/2024"},
    {10, "halawiyat", "oum ritaje", "076487213", 33, "annule", "20/6/2025"},
};

Reservation;
int nombre_reservation = 10;

int generer_reference() {
    return nombre_reservation + 1;
}

void ajouter() {
    if (nombre_reservation >= MAX_RESERVATIONS) {
        printf("Vous avez atteint le nombre maximum de r�servations.\n");
        return;
    }

    Reservation nv;
    printf("1. Nom :\n");
    scanf("%s", nv.nom);
    printf("2. Pr�nom :\n");
    scanf("%s", nv.prenom);
    printf("3. T�l�phone :\n");
    scanf("%s", nv.telephone);
    printf("4. �ge :\n");
    scanf("%d", &nv.age);
    printf("5. Statut (valid�, report�, annul�, trait�) :\n");
    scanf("%s", nv.statut);

    nv.reference = generer_reference();
    printf("6. Date de r�servation (YYYY/MM/JJ) :\n");
    scanf("%s", nv.date);

    RES[nombre_reservation] = nv;
    nombre_reservation++;
    printf("R�servation ajout�e avec succ�s : %d\n", nv.reference);
}
void trier_par_nom() {
    for (int i = 0; i < nombre_reservation - 1; i++) {
        for (int j = 0; j < nombre_reservation - i - 1; j++) {
            if (strcmp(RES[j].nom, RES[j + 1].nom) > 0) {
                Reservation temp = RES[j];
                RES[j] = RES[j + 1];
                RES[j + 1] = temp;
            }
        }
    }
}
void afficher_details(int reference) {
    for (int i = 0; i < nombre_reservation; i++) {
        if (RES[i].reference == reference) {
            printf("D�tails de la r�servation %d:\n", reference);
            printf("1. Nom : %s\n", RES[i].nom);
            printf("2. Pr�nom : %s\n", RES[i].prenom);
            printf("3. T�l�phone : %s\n", RES[i].telephone);
            printf("4. �ge : %d\n", RES[i].age);
            printf("5. Statut : %s\n", RES[i].statut);
            printf("6. Date de r�servation : %s\n", RES[i].date);
            return;
        }
    }
    printf("Aucune r�servation trouv�e avec cette r�f�rence %d.\n", reference);
}
void afficher_sans_reference()
{
    if (nombre_reservation == 0)
    {
        printf("nya pas de reservation.\n");
        return;
    }

    for (int i = 0; i < nombre_reservation; i++)
    {
        printf("Reference: %d\n", RES[i].reference);
        printf("Nom: %s\n", RES[i].nom);
        printf("Prenom: %s\n", RES[i].prenom);
        printf("Telephone: %s\n", RES[i].telephone);
        printf("Age: %d\n", RES[i].age);
        printf("Status: %s\n", RES[i].statut);
        printf("Date: %s\n", RES[i].date);
        printf("\n");
    }
    nombre_reservation++;
}

void modifier_reservation(int reference) {
    for (int i = 0; i < nombre_reservation; i++) {
        if (RES[i].reference == reference) {
            printf("Modifier la r�servation:\n");
            printf("Nom (ancien : %s) : ", RES[i].nom);
            scanf("%s", RES[i].nom);
            printf("Pr�nom (ancien : %s) : ", RES[i].prenom);
            scanf("%s", RES[i].prenom);
            printf("T�l�phone (ancien : %s) : ", RES[i].telephone);
            scanf("%s", RES[i].telephone);
            printf("�ge (ancien : %d) : ", RES[i].age);
            scanf("%d", &RES[i].age);
            printf("Statut (ancien : %s) : ", RES[i].statut);
            scanf("%s", RES[i].statut);
            printf("Date (ancien : %s) : ", RES[i].date);
            scanf("%s", RES[i].date);
            printf("R�servation mise � jour avec succ�s!\n");
            return;
        }
    }
    printf("Aucune r�servation trouv�e avec la r�f�rence %d.\n", reference);
}

void supprimer_reservation(int reference) {
    for (int i = 0; i < nombre_reservation; i++) {
        if (RES[i].reference == reference) {
            for (int j = i; j < nombre_reservation - 1; j++) {
                RES[j] = RES[j + 1]; // Shift entries
            }
            nombre_reservation--;
            printf("R�servation supprim�e avec succ�s!\n");
            return;
        }
    }
    printf("Aucune r�servation trouv�e avec la r�f�rence %d.\n", reference);
}

void afficher_toutes_reservations() {
    for (int i = 0; i < nombre_reservation; i++) {
        printf("R�f�rence: %d, Nom: %s, Pr�nom: %s, Statut: %s\n", RES[i].reference, RES[i].nom, RES[i].prenom, RES[i].statut);
    }
}

void statistiques() {
    if (nombre_reservation == 0) {
        printf("Aucune r�servation pour calculer les statistiques.\n");
        return;
    }

    int total_age = 0;
    int count_age = 0;
    int tranches_dage[3] = {0, 0, 0};
    int status_count[4] = {0};

    for (int i = 0; i < nombre_reservation; i++) {
        total_age += RES[i].age;
        count_age++;


        if (RES[i].age <= 18) tranches_dage[0]++;
        else if (RES[i].age <= 35) tranches_dage[1]++;
        else tranches_dage[2]++;


        if (strcmp(RES[i].statut, "valid�") == 0) status_count[0]++;
        else if (strcmp(RES[i].statut, "report�") == 0) status_count[1]++;
        else if (strcmp(RES[i].statut, "annul�") == 0) status_count[2]++;
        else if (strcmp(RES[i].statut, "trait�") == 0) status_count[3]++;
    }

    printf("Moyenne d'age des patients : %.2f\n", (double)total_age / count_age);
    printf("Nombre de patients par tranche d'age: 0-18: %d, 19-35 : %d, 36+: %d\n", tranches_dage[0], tranches_dage[1], tranches_dage[2]);
    printf("Nombre de reservations par statut: Valide: %d, Reporte : %d, Annul�: %d, Trait�: %d\n", status_count[0], status_count[1], status_count[2], status_count[3]);
}

int main() {
    int choix;

    while (1) {
        printf("\nMenu:\n");
        printf("1. Ajouter une r�servation .\n");
        printf("2. Modifier une r�servation .\n");
        printf("3. Supprimer une r�servation .\n");
        printf("4. Afficher les d�tails d'une r�servation .\n");
        printf("5. Afficher toutes les r�servations avec reference .\n");
        printf("6.Afficher toutes les r�servations sans reference .\n");
        printf("7. Afficher les statistiques .\n");
        printf("8. Quitter\n");
        printf("Entrer une option: ");
        scanf("%d", &choix);

        switch (choix) {
            case 1:
                ajouter();
                break;
            case 2: {
                int ref;
                printf("Entrez la reference de la reservation a modifier: ");
                scanf("%d", &ref);
                modifier_reservation(ref);
                break;
            }
            case 3: {
                int ref;
                printf("Entrez la reference de la reservation a supprimer: ");
                scanf("%d", &ref);
                supprimer_reservation(ref);
                break;
            }
            case 4: {
                int ref;
                printf("Entrez la reference de la reservation: ");
                scanf("%d", &ref);
                afficher_details(ref);
                break;
            }
            case 5:
                afficher_toutes_reservations();
                break;
            case 6:
                afficher_sans_reference();
                break;
            case 7:
                statistiques();
                break;
            case 8:
                printf("Merci beaucoup!\n");
                return 0;
            default:
                printf("Choix non valide, veuillez reessayer.\n");
        }
    }
    return 0;
}
