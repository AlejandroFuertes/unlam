#include "main.h"

int main()
{
    Alumno alumno = {11223344, "Pepito Paz", 10, 7.5};
    Alumno alumno2;
    int opcion;
    puts("1. Load data into a structure");
    puts("2. Format");
    puts("3. Pointers");
    puts("4. Save to text file");
    puts("5. Save to binary file");
    puts("6. Plus: Useful functions");
    puts("Select an option: ");
    scanf("%d", &opcion);

    switch (opcion)
    {
    case 1:
        puts("You Selected option 1: Struts");
        alumno2 = loadStructure();
        showStructure(alumno2);
        break;
    case 2:
        puts("You Selected option 2");
        break;
    case 3:
        puts("You Selected option 3");
        saludo();
        break;
    case 4:
        puts("You Selected option 4");
        saludo();
        break;
    case 5:
        puts("You Selected option 5");
        saludo();
        break;
    case 6:
        puts("You Selected option 6");
        saludo();
        break;

    default:
        puts("Incorrect option");
        break;
    }

    return 0;
}
