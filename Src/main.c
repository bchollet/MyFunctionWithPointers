#include <stdio.h>
#include <stdlib.h>

void sliceMinutes (int hours, int minutes); //D�claration de fonction

//L'utilisateur entre un nombre de minutes qui va ensuite �tre d�coup� en heure et en minutes restante.
//REMARQUE: Ce programme ne d�coupe pas correctement les valeurs entr�es. Il sert de base � ce qui sera d�velopp� par la suite.
int main()
{
    int nbminutes = 0, nbhours = 0;

    printf("Veuillez entrer un nombre de minutes: ");
    scanf("%i", &nbminutes);

    sliceMinutes(nbhours, nbminutes);

    printf("%i heures et %i minutes", nbhours, nbminutes);

    return EXIT_SUCCESS;
}


//Cette fonction va d�couper le nombre de minutes entr�e par l'utilisateur en heure et en minutes.
//ATTENTION: Dans l'�tat actuel, la fonction ne renvoie aucune valeur.
void sliceMinutes (int hours, int minutes)
{
    hours = minutes / 60; // Exemple: 90/60 = 1 vu que nous utilisons des entiers.
    minutes = minutes % 60; // Exemple: 90&60 = 30.
}
