#include <stdio.h>
#include <string.h>
#include "jeux.h"

#define MAX_JEUX 50

struct Jeu jeux[MAX_JEUX];
int nombreJeux = 0;

void ajouterJeu() {
    if (nombreJeux == MAX_JEUX) {
        printf("Le nombre maximum de jeux a été atteint.\n");
        return;
    }

    struct Jeu nouveauJeu;

    printf("Entrez le titre du jeu : ");
    scanf("%s", nouveauJeu.titre);

    printf("Entrez le genre du jeu : ");
    scanf("%s", nouveauJeu.genre);

    printf("Entrez la note du jeu : ");
    scanf("%f", &nouveauJeu.note);

    jeux[nombreJeux] = nouveauJeu;
    nombreJeux++;

    printf("Le jeu a été ajouté avec succès.\n");
}

void afficherJeux() {
    if (nombreJeux == 0) {
        printf("Aucun jeu n'est disponible.\n");
        return;
    }

    printf("Liste des jeux :\n");
    for (int i = 0; i < nombreJeux; i++) {
        printf("Titre : %s\n", jeux[i].titre);
        printf("Genre : %s\n", jeux[i].genre);
        printf("Note : %.2f\n\n", jeux[i].note);
    }
}

void trierJeuxParNote() {
    if (nombreJeux == 0) {
        printf("Aucun jeu n'est disponible.\n");
        return;
    }

    // Tri des jeux par ordre décroissant de note (utilisation de l'algorithme de tri par sélection)
    for (int i = 0; i < nombreJeux - 1; i++) {
        int indexMax = i;
        for (int j = i + 1; j < nombreJeux; j++) {
            if (jeux[j].note > jeux[indexMax].note) {
                indexMax = j;
            }
        }

        // Échange des positions des jeux
        struct Jeu temp = jeux[i];
        jeux[i] = jeux[indexMax];
        jeux[indexMax] = temp;
    }

    printf("Les jeux ont été triés par note avec succès.\n");
}

void afficherJeuxParGenre() {
    if (nombreJeux == 0) {
        printf("Aucun jeu n'est disponible.\n");
        return;
    }

    char genre[20];
    printf("Entrez le genre des jeux à afficher : ");
    scanf("%s", genre);

    printf("Jeux du genre \"%s\" :\n", genre);
    for (int i = 0; i < nombreJeux; i++) {
        if (strcmp(jeux[i].genre, genre) == 0) {
            printf("Titre : %s\n", jeux[i].titre);
            printf("Genre : %s\n", jeux[i].genre);
            printf("Note : %.2f\n\n", jeux[i].note);
        }
    }
}

void afficherNoteMoyenne() {
    if (nombreJeux == 0) {
        printf("Aucun jeu n'est disponible.\n");
        return;
    }

    float sommeNotes = 0;
    for (int i = 0; i < nombreJeux; i++) {
        sommeNotes += jeux[i].note;
    }

    float noteMoyenne = sommeNotes / nombreJeux;

    printf("La note moyenne des jeux est : %.2f\n", noteMoyenne);
}

void recommanderJeuStrategie() {
    if (nombreJeux == 0) {
        printf("Aucun jeu n'est disponible.\n");
        return;
    }

    printf("Jeux recommandés dans la catégorie \"Stratégie\" :\n");
    for (int i = 0; i < nombreJeux; i++) {
        if (strcmp(jeux[i].genre, "Stratégie") == 0) {
            printf("Titre : %s\n", jeux[i].titre);
            printf("Genre : %s\n", jeux[i].genre);
            printf("Note : %.2f\n\n", jeux[i].note);
        }
    }
}

void recommanderJeuSport() {
    if (nombreJeux == 0) {
        printf("Aucun jeu n'est disponible.\n");
        return;
    }

    printf("Jeux recommandés dans la catégorie \"Sport\" :\n");
    for (int i = 0; i < nombreJeux; i++) {
        if (strcmp(jeux[i].genre, "Sport") == 0) {
            printf("Titre : %s\n", jeux[i].titre);
            printf("Genre : %s\n", jeux[i].genre);
            printf("Note : %.2f\n\n", jeux[i].note);
        }
    }
}

void modifierNote() {
    if (nombreJeux == 0) {
        printf("Aucun jeu n'est disponible.\n");
        return;
    }

    char titre[50];
    printf("Entrez le titre du jeu à modifier : ");
    scanf("%s", titre);

    int index = -1;
    for (int i = 0; i < nombreJeux; i++) {
        if (strcmp(jeux[i].titre, titre) == 0) {
            index = i;
            break;
        }
    }

    if (index == -1) {
        printf("Le jeu \"%s\" n'a pas été trouvé.\n", titre);
        return;
    }

    float nouvelleNote;
    printf("Entrez la nouvelle note du jeu : ");
    scanf("%f", &nouvelleNote);

    jeux[index].note = nouvelleNote;

    printf("La note du jeu a été modifiée avec succès.\n");
}

void supprimerJeu() {
    if (nombreJeux == 0) {
        printf("Aucun jeu n'est disponible.\n");
        return;
    }

    char titre[50];
    printf("Entrez le titre du jeu à supprimer : ");
    scanf("%s", titre);

    int index = -1;
    for (int i = 0; i < nombreJeux; i++) {
        if (strcmp(jeux[i].titre, titre) == 0) {
            index = i;
            break;
        }
    }

    if (index == -1) {
        printf("Le jeu \"%s\" n'a pas été trouvé.\n", titre);
        return;
    }

    // Décalage des jeux à partir de l'index pour remplir le trou
    for (int i = index; i < nombreJeux - 1; i++) {
        jeux[i] = jeux[i + 1];
    }

    nombreJeux--;

    printf("Le jeu a été supprimé avec succès.\n");
}
