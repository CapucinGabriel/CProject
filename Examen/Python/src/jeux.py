class Jeu:
    def __init__(self, titre, genre, note):
        self.titre = titre
        self.genre = genre
        self.note = note

    def afficher(self):
        print("Titre :", self.titre)
        print("Genre :", self.genre)
        print("Note :", self.note)
