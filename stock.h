#ifndef __STOCK__H__
#define __STOCK__H__


typedef struct Stock Stock;
typedef struct date date;

struct date{
 int jour;
 int mois;
 int annee; 
};
struct Stock{
  char nom[100];
  char matieres[100];
  int code_livre[100];
  int nombre;
  date date_n;
};
Stock enregi_livre();
#endif
