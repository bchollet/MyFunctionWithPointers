#include <stdio.h>
#include <stdlib.h>

void sliceMinutes (); //D�claration de fonction

//L'utilisateur entre un nombre de minutes qui va ensuite �tre d�coup� en heure et en minutes restantes.
//REMARQUE: Ce programme d�coupe correctement les minutes.Toutefois, l'utilisation de variable globales est peu recommand�e, surtout dans des programmes comportant de nombreuses lignes de code
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


//Cette fonction va d�couper le nombre de minutes entr� par l'utilisateur en heure.
//Dans l'�tat actuel, la fonction n'a plus de param�tres et se contente de modifier les variables globales.
int sliceMinutesToHours (int hours, int minutes)
{
    hours = minutes / 60; // Exemple: 90/60 = 1 vu que nous utilisons des entiers.

    return hours;
}

int sliceMinutesToMinutes (int minutes)
{
    minutes = minutes % 60; // Exemple: 90%60 = 30.

    return minutes;
}
