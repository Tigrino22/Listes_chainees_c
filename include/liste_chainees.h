#ifndef __LISTE_CHAINEES__
#define __LISTE_CHAINEES__


#include <stdio.h>
#include <stdlib.h>
#include "structures.h"

List *initialisation(void);
void insertion(int nombre, List *list);
void suppression(List *list);
void afficherList(List *list);
void insertionMiddle(List *list, int numberPreviously, int number);
void suppressionMiddle(List *list, int number);
void suppressionList(List *list);
void nombreLevel(List *list);

#endif