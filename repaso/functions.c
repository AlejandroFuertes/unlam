#include "functions.h"

void saludo(){
    puts("Hello world");
}

Alumno loadStructure(){
    puts("-------------------------");
    puts("Function: loadStructure");
    Alumno alumno;
    puts("Please insert DNI:");
    scanf("%d", &alumno.dni);
    fflush(stdin);
    puts("Please insert name:");
    scanf("%s", alumno.nya);
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
    puts("-------------------------");
    puts("Function: showStructure");
    puts("Student:");
    printf(" DNI: %d", alumno.dni);
    printf(" Name, Surname: %s", alumno.nya);
    printf(" Number of approved subjects: %d", alumno.cantMateriasAprob);
    printf(" Total average: %.2f", alumno.promedioNotas);
    puts("");
}

void showStructureWithPointers(Alumno *alumno){
    puts("-------------------------");
    puts("Function: showStructureWithPointers");
    puts("Student:");
    printf(" DNI: %d", alumno->dni);
    printf(" Name, Surname: %s", alumno->nya);
    printf(" Number of approved subjects: %d", alumno->cantMateriasAprob);
    printf(" Total average: %.2f", alumno->promedioNotas);
    puts("");
}

void showInJsonFormat(Alumno *alumno){
    puts("-------------------------");
    puts("Function: showInJsonFormat");
    puts("{");
    printf("\t 'DNI': '%d',\n", alumno->dni);
    printf("\t 'NameSurname': '%s',\n", alumno->nya);
    printf("\t 'NumberApprovedSubjects': '%d',\n", alumno->cantMateriasAprob);
    printf("\t 'TotalAverage': '%.2f'\n", alumno->promedioNotas);
    puts("}");
}

void changeOrderNyA(Alumno *alumno){
    puts("-------------------------");
    puts("Function: changeOrderNyA");

    char *desplazar = *alumno->nya;
    char *nombre;
    char *apellido;

    while(*desplazar != '\0'){
        *nombre = *desplazar;
        desplazar++;
    }

}

