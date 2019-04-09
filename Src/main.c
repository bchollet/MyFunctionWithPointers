#include <stdio.h>
#include <stdlib.h>

void sliceMinutes (); //Déclaration de fonction

//L'utilisateur entre un nombre de minutes qui va ensuite être découpé en heure et en minutes restantes.
int main()
{
    int nbhours = 0, nbminutes = 0;

    printf("Veuillez entrer un nombre de minutes: ");
    scanf("%i", &nbminutes);

    nbhours = sliceMinutesToHours(nbhours, nbminutes);
    nbminutes = sliceMinutesToMinutes(nbminutes);

    printf("%i heures et %i minutes", nbhours, nbminutes);

    return EXIT_SUCCESS;
}


//Cette fonction va découper le nombre de minutes entré par l'utilisateur en heure.
//Retourne le nombre d'heure
int sliceMinutesToHours (int hours, int minutes)
{
    hours = minutes / 60; // Exemple: 90/60 = 1 vu que nous utilisons des entiers.

    return hours;
}

//Cette fonction va calculer le nombre de minutes restantes.
//Retourne le nombre de minutes restantes
int sliceMinutesToMinutes (int minutes)
{
    minutes = minutes % 60; // Exemple: 90%60 = 30.

    return minutes;
}
