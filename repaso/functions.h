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

/* STRUCTS */
Alumno loadStructure();
void showStructure(Alumno alumno);
void showStructureWithPointers(Alumno *alumno);

/* FORMAT */
void showInJsonFormat(Alumno *alumno);
void changeOrderNyA(Alumno *alumno);
#endif // FUNCTIONS_H_INCLUDED
