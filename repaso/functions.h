#ifndef FUNCTIONS_H_INCLUDED
#define FUNCTIONS_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int dni;
    char nya[50];
    int cantMateriasAprob;
    float promedioNotas;
} Alumno;


void saludo();
Alumno loadStructure();
void showStructure();

#endif // FUNCTIONS_H_INCLUDED
