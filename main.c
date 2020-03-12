//Auteur : Adrian Monnin
//Lieu : SC-C133-PC05
//Projet : Bataille Navale
//Description :
#include <stdio.h>

int main()
{
    //Déclaration des variables
    int menu = 1,
        choix1,
        choix2,
        joueurs[10],
        nbJoueurs = 0;
    //Afficher le menu
    while(menu!=0)
    {
        printf("1 - Afficher l'aide\n2- Commencer une partie\n3 - Afficher la liste des scores\n");
        //Demander au joueur de choisir ce qu'il veut faire
        scanf("%d", &choix1);
        //Suite du programme
        switch(choix1)
        {
            //Afficher l'aide
            case 1:
                menu = 0;
                printf("\nCe programme est un jeu de bataille navale\nLancez des bombes pour détruire tous les bateaux !");
                printf("\n1 - Retourner au menu\n");
                //Retourner au menu
                scanf("%d", &choix2);
                if(choix2!=0)
                {
                    menu = 1;
                }
                break;
            case 2:
                //Demander au joueur d'entrer son nom
                printf("\nEntrez votre nom :");
                //Mettre a jour la liste des joueurs
                scanf("%d", joueurs[nbJoueurs]);
                nbJoueurs++;
                //Afficher la grille
                printf(" ");
                for(int i=1;i>=10;i++)
                {
                    printf("_ ");
                }
                menu=0;
                break;
            case 3:

                break;
            default:

                break;
        }
    }

    return 0;
}