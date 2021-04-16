#include <stdio.h>
#include <stdlib.h>
#include "Matrices.h"

int main()
{
    int mat[3][3]={ {1,2,3},{1,2,3},{1,2,3} };
    unsigned orden = 3;

    printf("Suma diagonal secundaria: %d\n", sumaDiagonal(mat, orden));


    return 0;
}
