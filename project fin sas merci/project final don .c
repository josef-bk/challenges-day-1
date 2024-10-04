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
        printf("Vous avez atteint le nombre maximum de réservations.\n");
        return;
    }

    Reservation nv;
    printf("1. Nom :\n");
    scanf("%s", nv.nom);
    printf("2. Prénom :\n");
    scanf("%s", nv.prenom);
    printf("3. Téléphone :\n");
    scanf("%s", nv.telephone);
    printf("4. Âge :\n");
    scanf("%d", &nv.age);
    printf("5. Statut (validé, reporté, annulé, traité) :\n");
    scanf("%s", nv.statut);

    nv.reference = generer_reference();
    printf("6. Date de réservation (YYYY/MM/JJ) :\n");
    scanf("%s", nv.date);

    RES[nombre_reservation] = nv;
    nombre_reservation++;
    printf("Réservation ajoutée avec succès : %d\n", nv.reference);
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
            printf("Détails de la réservation %d:\n", reference);
            printf("1. Nom : %s\n", RES[i].nom);
            printf("2. Prénom : %s\n", RES[i].prenom);
            printf("3. Téléphone : %s\n", RES[i].telephone);
            printf("4. Âge : %d\n", RES[i].age);
            printf("5. Statut : %s\n", RES[i].statut);
            printf("6. Date de réservation : %s\n", RES[i].date);
            return;
        }
    }
    printf("Aucune réservation trouvée avec cette référence %d.\n", reference);
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
            printf("Modifier la réservation:\n");
            printf("Nom (ancien : %s) : ", RES[i].nom);
            scanf("%s", RES[i].nom);
            printf("Prénom (ancien : %s) : ", RES[i].prenom);
            scanf("%s", RES[i].prenom);
            printf("Téléphone (ancien : %s) : ", RES[i].telephone);
            scanf("%s", RES[i].telephone);
            printf("Âge (ancien : %d) : ", RES[i].age);
            scanf("%d", &RES[i].age);
            printf("Statut (ancien : %s) : ", RES[i].statut);
            scanf("%s", RES[i].statut);
            printf("Date (ancien : %s) : ", RES[i].date);
            scanf("%s", RES[i].date);
            printf("Réservation mise à jour avec succès!\n");
            return;
        }
    }
    printf("Aucune réservation trouvée avec la référence %d.\n", reference);
}

void supprimer_reservation(int reference) {
    for (int i = 0; i < nombre_reservation; i++) {
        if (RES[i].reference == reference) {
            for (int j = i; j < nombre_reservation - 1; j++) {
                RES[j] = RES[j + 1]; // Shift entries
            }
            nombre_reservation--;
            printf("Réservation supprimée avec succès!\n");
            return;
        }
    }
    printf("Aucune réservation trouvée avec la référence %d.\n", reference);
}

void afficher_toutes_reservations() {
    for (int i = 0; i < nombre_reservation; i++) {
        printf("Référence: %d, Nom: %s, Prénom: %s, Statut: %s\n", RES[i].reference, RES[i].nom, RES[i].prenom, RES[i].statut);
    }
}

void statistiques() {
    if (nombre_reservation == 0) {
        printf("Aucune réservation pour calculer les statistiques.\n");
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


        if (strcmp(RES[i].statut, "validé") == 0) status_count[0]++;
        else if (strcmp(RES[i].statut, "reporté") == 0) status_count[1]++;
        else if (strcmp(RES[i].statut, "annulé") == 0) status_count[2]++;
        else if (strcmp(RES[i].statut, "traité") == 0) status_count[3]++;
    }

    printf("Moyenne d'age des patients : %.2f\n", (double)total_age / count_age);
    printf("Nombre de patients par tranche d'age: 0-18: %d, 19-35 : %d, 36+: %d\n", tranches_dage[0], tranches_dage[1], tranches_dage[2]);
    printf("Nombre de reservations par statut: Valide: %d, Reporte : %d, Annulé: %d, Traité: %d\n", status_count[0], status_count[1], status_count[2], status_count[3]);
}

int main() {
    int choix;

    while (1) {
        printf("\nMenu:\n");
        printf("1. Ajouter une réservation .\n");
        printf("2. Modifier une réservation .\n");
        printf("3. Supprimer une réservation .\n");
        printf("4. Afficher les détails d'une réservation .\n");
        printf("5. Afficher toutes les réservations avec reference .\n");
        printf("6.Afficher toutes les réservations sans reference .\n");
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
