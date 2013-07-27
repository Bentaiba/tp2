#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAILLE_MAX 1000

int main(int argc, char *argv[])
{
    FILE* fichier = NULL;
    char chaine[TAILLE_MAX]=""; // Chaîne vide de taille TAILLE_MAX

    fichier = fopen("test.txt", "a+");

    if (fichier != NULL)
    {

     fputs("oh",fichier);
     fgets(chaine, TAILLE_MAX, fichier); // On lit maximum TAILLE_MAX caractères du fichier, on stocke le tout dans "chaine"
     printf("%s", chaine);

      fclose(fichier);
    }

    else
    {
        printf("erreur");
        printf("u'r stupid");
    }
    printf("la taille d'un int est %d octets \n",sizeof(int));
    printf("la taille d'un double est %d octet \n",sizeof(double));

    return 0;
}
