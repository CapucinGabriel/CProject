// Projet5.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <stdio.h>
#include <string.h>

#define MAX_PRODUITS 10
#define MAX_NOM_PRODUIT 50

typedef struct {
    char nom[MAX_NOM_PRODUIT];
    float prix;
} Produit;

int main() {
    Produit produits[MAX_PRODUITS] = {
        {"Livre", 12.99},
        {"Stylo", 1.49},
        {"Cahier", 4.99},
        {"Crayon", 0.99},
        {"Feutre", 2.99},
        {"Trousse", 6.99},
        {"Gomme", 0.49},
        {"Regle", 1.99},
        {"Sac a dos", 19.99},
        {"Calculatrice", 9.99}
    };

    int choix;
    int quantite;
    float total = 0.0;

    printf("Bienvenue dans notre magasin !\n");
    printf("Voici la liste des produits disponibles :\n");

    for (int i = 0; i < MAX_PRODUITS; i++) {
        printf("%d. %s - %.2f\n", i + 1, produits[i].nom, produits[i].prix);
    }

    printf("Veuillez saisir le numero du produit souhaite (0 pour terminer) : ");
    scanf_s("%d", &choix);

    while (choix != 0) {
        if (choix >= 1 && choix <= MAX_PRODUITS) {
            printf("Saisir la quantite : ");
            scanf_s("%d", &quantite);

            if (quantite > 0) {
                total += produits[choix - 1].prix * quantite;
            }
            else {
                printf("Quantite invalide.\n");
            }
        }
        else {
            printf("Produit invalide.\n");
        }

        printf("Veuillez saisir le numero du produit souhaite (0 pour terminer) : ");
        scanf_s("%d", &choix);
    }

    printf("Le total de votre commande est : %.2f\n", total);

    return 0;
}





// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
