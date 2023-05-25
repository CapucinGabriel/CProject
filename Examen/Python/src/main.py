from jeu import Jeu


class GestionJeux:
    jeux = []

    def ajouter_jeu(self, titre, genre, note):
        jeu = Jeu(titre, genre, note)
        self.jeux.append(jeu)
        print("Le jeu a été ajouté avec succès.")

    def afficher_jeux(self):
        if len(self.jeux) == 0:
            print("Aucun jeu disponible.")
        else:
            for jeu in self.jeux:
                jeu.afficher()

    # Les autres méthodes de gestion des jeux restent inchangées

def main():
    gestion_jeux = GestionJeux()

    gestion_jeux.ajouter_jeu("The Witcher 3", "RPG", 9.5)
    gestion_jeux.ajouter_jeu("FIFA 21", "Sport", 8.2)
    gestion_jeux.ajouter_jeu("Civilization VI", "Stratégie", 9.0)
    gestion_jeux.ajouter_jeu("Assassin's Creed Odyssey", "Action-Adventure", 8.8)
    gestion_jeux.ajouter_jeu("Rocket League", "Sport", 8.5)

    gestion_jeux.afficher_jeux()
    # Les autres appels de méthodes restent inchangés

if __name__ == "__main__":
    main()
