#include "Matrices.h"

int sumaDiagonalSuperior(const int matriz[][3], int orden);
int sumaDiagonal(const int matriz[][3], int orden);
int sumaDiagonalSecundaria(const int matriz[][3], int orden);


int sumaDiagonalSuperior(const int matriz[][3], int orden){

    int i, j, suma=0;

    for(i = 0; i < (orden-1); i++){
        for(j=(1+i); j < orden; j++){
            suma += matriz[i][j];
        }
    }

    return suma;
}


int sumaDiagonal(const int matriz[][3], int orden){
    int i, suma = 0;
    for(i = 0; i < orden; i++){
        suma += matriz[i][i];
    }

    return suma;
}

int sumaDiagonalSecundaria(const int matriz[][3], int orden){
    int i, suma = 0;

    for(i = 0; i < orden; i++){
        suma += matriz[i][(orden-1)-i];
    }

    return suma;
}
