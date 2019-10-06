#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "lecture.h"



typedef struct lecture lecture;
lecture debut_lecture()
{
	 lecture *R;
   R=malloc(200*sizeof(int));
   printf("Entrer votre nom\n");
   scanf("%s",R->nom_h);
   printf("Entrer votre matricule\n");
   scanf("%s",R->matr);
   printf("Entrer le nom du livre\n");
   scanf("%s",R->nom_l);
   printf("Entrer la matiere\n");
   scanf("%s",R->matiere);
   printf("DATE(JJ/MM/AAAA):\n ");
   printf("JOUR : " );
   scanf("%d",&R->pd.jour);
   printf(" MOIS : ");
   scanf("%d",&R->pd.mois);
   printf("ANNEE : ");
   scanf("%d",&R->pd.annee);
   printf("Heure et minute\n");
   scanf("%d",&R->h_debut.h);
   scanf("%d",&R->h_debut.min);
   R->h_fin.h=0;
   R->h_fin.min=0;
   return *R;
}

 lecture fin_recher(lecture *R,char *matricule,int h,int min,char *nom_h)
{
  
   printf("entrer votre matricule \n");
   scanf("%s",&matricule);
   for(int i=0;i<500;i++)
   {
    if (strcmp(matricule,&R->matr[i])==0)
    {
      printf("Heure et minute\n");
      scanf("%d",&h);
      scanf("%d",&min);
      R->h_fin.h= h;
     R->h_fin.min=min;  
    }else
    printf("Introuvable\n");
  }
   printf("entrer l heure et minute\n");
   scanf("%d",&h);
   scanf("%d",&min);
   int i=0;
   
}