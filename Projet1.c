// Projet1.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

//#include <iostream>
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "fr_FR.UTF-8"); // Définit le paramètre régional en français avec le codage UTF-8
    int nombre;
    char continuer;

    do {
        printf("Entrez un nombre : ");
        scanf_s("%d", &nombre);

        if (nombre > 0) {
            printf("Le nombre est positif.\n");
        }
        else if (nombre < 0) {
            printf("Le nombre est négatif.\n");
        }
        else {
            printf("Le nombre est zéro.\n");
        }

        printf("Voulez-vous continuer ? (o/n) : ");
        scanf_s(" %c", &continuer);
    } while (continuer == 'o' || continuer == 'O');

    printf("Au revoir !\n");

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

