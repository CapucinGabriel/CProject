#ifndef JEUX_H
#define JEUX_H

struct Jeu {
    char titre[50];
    char genre[20];
    float note;
};

void ajouterJeu();
void afficherJeux();
void trierJeuxParNote();
void afficherJeuxParGenre();
void afficherNoteMoyenne();
void recommanderJeuStrategie();
void recommanderJeuSport();
void modifierNote();
void supprimerJeu();

#endif
