#include "main.h"

int main()
{
    Alumno alumno = {11223344, "Pepito Paz", 10, 7.5};
    int opcion;
    printf("1. Load data into a structure\n");
    printf("2. Format\n");
    printf("3. Pointers\n");
    printf("4. Save to text file\n");
    printf("5. Save to binary file\n");
    printf("6. Plus: Useful functions\n")
    printf("Select an option: ");
    scanf("%d", &opcion);

    switch (opcion)
    {
    case 1:
        printf("You Selected option 1");
        break;
    case 2:
        printf("You Selected option 2");
        break;
    case 3:
        printf("You Selected option 3");
        saludo();
        break;
    case 4:
        printf("You Selected option 4");
        saludo();
        break;
    case 5:
        printf("You Selected option 5");
        saludo();
        break;
    case 6:
        printf("You Selected option 6");
        saludo();
        break;

    default:
        printf("Incorrect option");
        break;
    }

    return 0;
}
