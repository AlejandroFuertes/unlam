#include "Vectores.h"
#include "stdio.h"

void insertarEnVector(int elemento, int posicion, int vec[]);
void insertarEnVectorOrdenado(int elemento, int* vec, int longitud);




void insertarEnVector(int elemento, int posicion, int vec[]){
    vec[posicion]=elemento;
}

void insertarEnVectorOrdenado(int elemento, int* vec, int longitud){
    if( *vec != *(vec+(longitud-1)) ){//pregunto si no todo el vector seria igual
            int i, auxPos;

            for(i = 0; i < longitud; i++){
                if( *(vec+i) > elemento )
                {
                    auxPos = i;//en esta posicion tenemos que insertar el elemento
                    break;
                }
            }

            if(i == longitud)//en caso que el elemento sea el mayor de todos
                *(vec+longitud) = elemento;
            else
            {
                for(i=longitud;i>auxPos;i--){
                    *(vec+i) = *(vec+i-1);
                }
                *(vec+auxPos)=elemento;

            }



    }
    else
       *(vec+longitud) = elemento;


}




