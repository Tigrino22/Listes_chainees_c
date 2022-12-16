#ifndef __STRUCTURES_H__
#define __STRUCTURES_H__


#include <stdio.h>
#include <stdlib.h>

typedef struct Level Level;
struct Level{

    int number;
    Level *next;

};

typedef struct List List;
struct List
{

    Level *first;
    int quantity;

};


#endif