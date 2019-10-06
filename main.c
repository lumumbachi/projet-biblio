#include <stdio.h>
#include <stdlib.h> 
#include <string.h>
#include <conio.h>

#include "stock.h"
#include "lecture.h"

#define TAILLE 500


int Menu()
{
    int choix;
        printf("\n****MENU****\n");
        printf("1 -> Gestion du stock \n");
        printf("2 -> Lecture sur place \n");
        printf("3 -> Ajouter heure fin \n");
        printf("4 -> Emprunter livres \n");
        printf("0 -> pour quitter \n");
        printf("Faites votre choix\n");
        scanf("%d",&choix);
        return choix;
}

int main ()
{
	int choix, taille=1000;
    int i;
	Stock ListStock[taille];
    lecture ListLecteur[TAILLE];
    lecture RechercheLecteur[TAILLE];


while(1){
    choix = Menu();
	switch(choix){

 case 1 :
        {
            int i=0;
        	 ListStock[i] = enregi_livre();
             i++;
        }    
    break;

 case 2 :
        {
        int i=0;
        ListLecteur[i] = debut_lecture();
        i++;
        }
      break;


}
}

	return 0;
}
