while True:
    nombre = int(input("Entrez un nombre : "))

    if nombre > 0:
        print("Le nombre est positif.")
    elif nombre < 0:
        print("Le nombre est négatif.")
    else:
        print("Le nombre est zéro.")

    continuer = input("Voulez-vous continuer ? (o/n) : ")
    if continuer.lower() != 'o':
        break

print("Au revoir !")
