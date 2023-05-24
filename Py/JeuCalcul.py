class Produit:
    def __init__(self, nom, prix):
        self.nom = nom
        self.prix = prix

produits = [
    Produit("Livre", 12.99),
    Produit("Stylo", 1.49),
    Produit("Cahier", 4.99),
    Produit("Crayon", 0.99),
    Produit("Feutre", 2.99),
    Produit("Trousse", 6.99),
    Produit("Gomme", 0.49),
    Produit("Regle", 1.99),
    Produit("Sac a dos", 19.99),
    Produit("Calculatrice", 9.99)
]

total = 0.0

print("Bienvenue dans notre magasin !")
print("Voici la liste des produits disponibles :")

for i, produit in enumerate(produits):
    print(f"{i + 1}. {produit.nom} - {produit.prix:.2f}")

choix = int(input("Veuillez saisir le numéro du produit souhaité (0 pour terminer) : "))

while choix != 0:
    if choix >= 1 and choix <= len(produits):
        quantite = int(input("Saisir la quantité : "))

        if quantite > 0:
            total += produits[choix - 1].prix * quantite
        else:
            print("Quantité invalide.")
    else:
        print("Produit invalide.")

    choix = int(input("Veuillez saisir le numéro du produit souhaité (0 pour terminer) : "))

print(f"Le total de votre commande est : {total:.2f}")
