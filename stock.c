#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "stock.h"


Stock enregi_livre()
{
	Stock S;
	printf("Entrer le nom du livre\n");
	scanf("%s",S.nom);
	printf("Entrer la matiere \n");
	scanf("%s",S.matieres);
	printf("Entrer le code du livre\n");
	scanf("%d",&S.code_livre);
	printf("Entrer le nombre de livre\n");
	scanf("%d",&S.nombre);
	printf("DATE DE DEPOT (JJ/MM/AAAA):\n ");
    printf("JOUR : " );
    scanf("%d",&S.date_n.jour);
    printf(" MOIS : ");
    scanf("%d",&S.date_n.mois);
    printf("ANNEE : ");
    scanf("%d",&S.date_n.annee);
	return S;
}


