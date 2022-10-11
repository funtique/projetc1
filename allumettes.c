#include <stdio.h>
#include <stdlib.h>

int main()
{
    int choix;

    printf("**********************\n");
    printf("* Jeu des allumettes *\n");
    printf("**********************\n");
    printf("\n\n");
    printf("Bonjour et bienvenue dans le jeu des allumettes\n");
    printf("\nVous allez avoir 3 menus.\nVous choisirez d'abord si vous voulez voir les regles du jeu ou non, puis le\nnombre d'allumettes a utiliser, et enfin le nombre de joueurs.\n\n");

    printf("\n    Que faire ?\n\n");
    printf("1 - Jouer\n");
    printf("2 - Voir les regles du jeu\n");
    printf("3 - Voir les credits\n");
    printf("4 - Quitter");
    printf("\n\nVotre choix : ");

    scanf("%d", &choix);

    return 0;
}