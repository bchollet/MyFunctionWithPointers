#include <stdio.h>
#include <stdlib.h>

void sliceMinutes (); //Déclaration de fonction

int nbminutes = 0, nbhours = 0; //Déclaration de variables globales

//L'utilisateur entre un nombre de minutes qui va ensuite être découpé en heure et en minutes restantes.
//REMARQUE: Ce programme découpe correctement les minutes.Toutefois, l'utilisation de variable globales est peu recommandée, surtout dans des programmes comportant de nombreuses lignes de code
int main()
{
    printf("Veuillez entrer un nombre de minutes: ");
    scanf("%i", &nbminutes);

    sliceMinutes(nbhours, nbminutes);

    printf("%i heures et %i minutes", nbhours, nbminutes);

    return EXIT_SUCCESS;
}


//Cette fonction va découper le nombre de minutes entré par l'utilisateur en heure et en minutes.
//Dans l'état actuel, la fonction n'a plus de paramètres et se contente de modifier les variables globales.
void sliceMinutes ()
{
    nbhours = nbminutes / 60; // Exemple: 90/60 = 1 vu que nous utilisons des entiers.
    nbminutes = nbminutes % 60; // Exemple: 90%60 = 30.
}
