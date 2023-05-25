#include <stdio.h>
#include "jeux.h"

int main() {
    // Déclaration des variables
    int choix;
    char titre[50];
    char genre[20];
    float note;

    // Boucle principale du programme
    do {
        // Affichage du menu
        printf("=== Gestion des jeux ===\n");
        printf("1. Ajouter un jeu\n");
        printf("2. Afficher tous les jeux\n");
        printf("3. Afficher la note moyenne\n");
        printf("4. Recommander un jeu de la catégorie \"Stratégie\"\n");
        printf("5. Recommander un jeu de la catégorie \"Sport\"\n");
        printf("6. Modifier la note d'un jeu\n");
        printf("7. Supprimer un jeu\n");
        printf("8. Quitter\n");
        printf("Choix : ");
        scanf("%d", &choix);

        // Exécution de l'action correspondante au choix de l'utilisateur
        switch (choix) {
        case 1:
            printf("=== Ajouter un jeu ===\n");
            printf("Titre : ");
            scanf("%s", titre);
            printf("Genre : ");
            scanf("%s", genre);
            printf("Note : ");
            scanf("%f", &note);
            ajouterJeu(titre, genre, note);
            printf("Le jeu a été ajouté avec succès.\n");
            break;
        case 2:
            printf("=== Afficher tous les jeux ===\n");
            afficherJeux();
            break;
        case 3:
            printf("=== Afficher la note moyenne ===\n");
            afficherNoteMoyenne();
            break;
        case 4:
            printf("=== Recommander un jeu de la catégorie \"Stratégie\" ===\n");
            recommanderJeuStrategie();
            break;
        case 5:
            printf("=== Recommander un jeu de la catégorie \"Sport\" ===\n");
            recommanderJeuSport();
            break;
        case 6:
            printf("=== Modifier la note d'un jeu ===\n");
            modifierNote();
            break;
        case 7:
            printf("=== Supprimer un jeu ===\n");
            supprimerJeu();
            break;
        case 8:
            printf("Au revoir !\n");
            break;
        default:
            printf("Choix invalide. Veuillez réessayer.\n");
            break;
        }

        printf("\n");

    } while (choix != 8);

    return 0;
}
