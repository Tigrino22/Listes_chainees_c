#include "liste_chainees.h"


List *initialisation(void){

    List *list = malloc(sizeof(*list));
    Level *level = malloc(sizeof(*level));

    if (list == NULL || level == NULL)
    {
        fprintf(stderr, "Erreur lors de l'initialisation");
        exit(EXIT_FAILURE);
    }

    level->number = 1;
    level->next = NULL;
    list->first = level;
    list->quantity = 1;

    return list;
    
}

void nombreLevel(List *list){
    printf("Nombre de Level dans la liste : %d\n", list->quantity);
}

void suppressionList(List *list){

    Level *aSupprimer = list->first;
    Level *aSupprimerNext = NULL;

    while (aSupprimer != NULL)
    {
        aSupprimerNext = aSupprimer->next;
        free(aSupprimer);
        list->quantity--;
        aSupprimer = aSupprimerNext;
    }

    afficherList(list);

}

void suppressionMiddle(List *list, int number){

    if (list == NULL)
    {
        exit(EXIT_FAILURE);
    }

    Level *aSupprimerPrev = NULL;
    Level *aSupprimer = list->first;
    Level *aSupprimerNext = aSupprimer->next;
    

    while (aSupprimer->number != number){
        aSupprimerPrev = aSupprimer;
        aSupprimer = aSupprimer->next;
        aSupprimerNext = aSupprimerNext->next;
    }

    printf("suppression du %d\n", aSupprimer->number);
    free(aSupprimer);
    list->quantity--;
    aSupprimerPrev->next = aSupprimerNext;  

}

void insertion(int nombre, List *list){

    Level *new = malloc(sizeof(*new));
    if(list == NULL || new == NULL){
        exit(EXIT_FAILURE);
    }

    new->number = nombre;

    new->next = list->first;
    list->first = new;
    list->quantity++;

}

void suppression(List *list){
    if (list == NULL)
    {
        exit(EXIT_FAILURE);
    }

    if (list->first != NULL)
    {
        Level *aSupprimer = list->first;
        list->first = list->first->next;
        free(aSupprimer);
        list->quantity--;
    }
}

void afficherList(List *list){

    if (list == NULL)
    {
        exit(EXIT_FAILURE);
    }
    

    Level *actuel = list->first;

    while (actuel != NULL)
    {
        printf("%d -> ", actuel->number);
        actuel = actuel->next;
    }
    
    printf("NULL\n");
}

void insertionMiddle(List *list, int numberPreviously, int number){

    Level *new = malloc(sizeof(Level));
    if(new == NULL || list == NULL){
        exit(EXIT_FAILURE);
    }

    new->number = number;

    Level *actuel = list->first;

    while (actuel->number != numberPreviously)
    {
        actuel = actuel->next;
    }

    new->next = actuel->next;
    actuel->next = new;
    list->quantity++;

}

