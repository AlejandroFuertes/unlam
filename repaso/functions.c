#include "functions.h"

void saludo(){
    puts("Hello world");
}

Alumno loadStructure(){
    Alumno alumno;
    puts("Please insert DNI:");
    scanf("%d", &alumno.dni);
    fflush(stdin);
    puts("Please insert name:");
    scanf("%s", &alumno.nya);
    fflush(stdin);
    puts("Please insert the number of approved subjects:");
    scanf("%d", &alumno.cantMateriasAprob);
    fflush(stdin);
    puts("Please insert total average :");
    scanf("%f", &alumno.promedioNotas);
    fflush(stdin);
    return alumno;
}

void showStructure(Alumno alumno){
    puts("Student:");
    printf("DNI: %d", alumno.dni);
    printf("Name, Surname: %s", alumno.nya);
    printf("Number of approved subjects: %d", alumno.cantMateriasAprob);
    printf("Total average: %.2f", alumno.promedioNotas);
}
