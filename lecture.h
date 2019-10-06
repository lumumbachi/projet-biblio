#ifndef __LECTURE__H__
#define __LECTURE__H__

#include "stock.h"

typedef struct lecture lecture;
typedef struct periode periode;
typedef struct heure heure;

struct heure
{
 int h;
 int min;
};
struct periode
{
 int jour;
 int mois;
 int annee; 
};
struct lecture
{
  char matr[100];
  char nom_h[100];
  char nom_l[100];
  char matiere[100];
  periode pd;
  heure h_debut;
  heure h_fin;
};
lecture debut_lecture();
lecture fin_recher();
#endif