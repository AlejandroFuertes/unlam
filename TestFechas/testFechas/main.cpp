#include <iostream>
#include "Fecha.h"

using namespace std;

int main()
{
    Fecha hoy(10, 4, 2021);
    Fecha hoyMas30 = ((const Fecha)hoy).sumarDias(30);

    return 0;
}
