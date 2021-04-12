#include <stdio.h>
#include <stdlib.h>
#include "Vectores.h"

int main()
{
    int vec[10]={0,3,7,9,10,16,26,45,90,150};

    insertarEnVectorOrdenado(170, vec, (int) (sizeof(vec) / sizeof(vec[0])) );
    puts("VECTOR");
    int i;
    for(i=0;i<11;i++){
        printf("%d\n",vec[i]);
    }






    return 0;
}
