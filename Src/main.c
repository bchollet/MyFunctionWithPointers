#include <stdio.h>
#include <stdlib.h>
#define UPPER_LIMIT 1000000

void sliceMinutes (); //D�claration de fonction

//L'utilisateur entre un nombre de minutes qui va ensuite �tre d�coup� en heure et en minutes restantes.
int main()
{
    int minutes = 0, hours = 0;

    do
    {
        printf("Veuillez entrer un nombre de minutes: ");
        fflush(stdin);

    } while ((scanf("%i", &minutes) != 1) || minutes > UPPER_LIMIT || minutes < 0); //V�rification que l'utilisateur entre un entier positif ne d�passant pas une certaine valeur


    sliceMinutes(&hours, &minutes); //On envoit dans la fonction la valeur des adresses des variables

    printf("%i heures et %i minutes", hours, minutes); //On imprime la valeur de la variable

    return EXIT_SUCCESS;
}


//Cette fonction va d�couper le nombre de minutes entr� par l'utilisateur en heure et en minutes restantes.
void sliceMinutes (int *pointerHour, int *pointerMinutes) //On d�clare des pointeurs. On met donc un * devant le nom de la variable
{

    //Ces param�tres re�oivent une adressse m�moire.
    //Or on d�sire travailler avec les valeur contenue � cette adresse.
    //On ajoute donc un * pour obtenir la valeur stock�e � l'adresse m�moire donn�e.

    *pointerHour = *pointerMinutes / 60; // Exemple: 90/60 = 1 vu que nous utilisons des entiers.
    *pointerMinutes = *pointerMinutes % 60; // Exemple: 90%60 = 30.
}
