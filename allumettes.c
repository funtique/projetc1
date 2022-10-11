#include <stdio.h>
#include <stdlib.h>

int expert();

int main()
{
    int choix;

    printf("**********************\n");
    printf("* Jeu des allumettes *\n");
    printf("**********************\n");
    printf("\n\n");
    printf("Bonjour et bienvenue dans le jeu des allumettes\n");

    printf("\n    Que faire ?\n\n");
    printf("1 - Jouer mode expert\n");
    printf("2 - Jouer mode naif\n");
    printf("3 - Jouer 1v1\n");
    printf("4 - Quitter");
    printf("\n\nVotre choix : ");

    scanf("%d", &choix);

    switch (choix)
    {
    case 1:
        return expert();
    
    default:
        break;
    }

    return 0;
}

int expert()
{
    int nb_allumettes = 30;
    int nb_allumettes_prises = 0;

    while (1)
    {

        printf("Il reste %d allumettes\n", nb_allumettes);
        printf("Combien d'allumettes voulez-vous prendre ? (1, 2 ou 3) : ");
        scanf("%d", &nb_allumettes_prises);
                
        if (nb_allumettes_prises >= 1 && nb_allumettes_prises <= 3) {
            
            nb_allumettes = nb_allumettes - nb_allumettes_prises;
            if (nb_allumettes == 1)
            {
                printf("Vous avez gagné !\n");
                break;
            }
        }
    }
    
}