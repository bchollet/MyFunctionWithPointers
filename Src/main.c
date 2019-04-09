#include <stdio.h>
#include <stdlib.h>
#define UPPER_LIMIT 1000000

void sliceMinutes (); //Déclaration de fonction

//L'utilisateur entre un nombre de minutes qui va ensuite être découpé en heure et en minutes restantes.
int main()
{
    int minutes = 0, hours = 0;

    do
    {
        printf("Veuillez entrer un nombre de minutes: ");
        fflush(stdin);

    } while ((scanf("%i", &minutes) != 1) || minutes > UPPER_LIMIT || minutes < 0); //Vérification que l'utilisateur entre un entier positif ne dépassant pas une certaine valeur


    sliceMinutes(&hours, &minutes); //On envoit dans la fonction la valeur des adresses des variables

    printf("%i heures et %i minutes", hours, minutes); //On imprime la valeur de la variable

    return EXIT_SUCCESS;
}


//Cette fonction va découper le nombre de minutes entré par l'utilisateur en heure et en minutes restantes.
void sliceMinutes (int *pointerHour, int *pointerMinutes) //On déclare des pointeurs. On met donc un * devant le nom de la variable
{

    //Ces paramètres reçoivent une adressse mémoire.
    //Or on désire travailler avec les valeur contenue à cette adresse.
    //On ajoute donc un * pour obtenir la valeur stockée à l'adresse mémoire donnée.

    *pointerHour = *pointerMinutes / 60; // Exemple: 90/60 = 1 vu que nous utilisons des entiers.
    *pointerMinutes = *pointerMinutes % 60; // Exemple: 90%60 = 30.
}
