/*

C Application to learn Chained List

Created by Valentin Legris on 15 december 2022


*/

#include <stdio.h>
#include <stdlib.h>

#include "structures.h"
#include "liste_chainees.h"


int main(void){

    List *maList = initialisation();

    insertion(10, maList);
    insertion(33, maList);
    insertion(54, maList);
    insertion(145, maList);

    nombreLevel(maList);
    
    afficherList(maList);

    insertionMiddle(maList, 33, 50);
    insertionMiddle(maList, 145, 200);
    nombreLevel(maList);
    afficherList(maList);

    suppressionMiddle(maList, 33);
    nombreLevel(maList);

    afficherList(maList);

    suppressionList(maList);
    nombreLevel(maList);

    return EXIT_SUCCESS;

}
