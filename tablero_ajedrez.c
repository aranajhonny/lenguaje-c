#include <stdio.h>
#define tablero 8
int main(void){
    int casilla[8][8];
    int i, j, pieza;
    for(i=0;i<=tablero-1;i++){//Ciclo destinado a crear las columnas del tablero
       for(j=0;j<=tablero-1;j++){//Ciclo destinado a crear las filas del tablero
          casilla[i][j] = 0;
       }
    }
    for(i=tablero-1;i>=0;i--){
        casilla[1][i] = 6;
        casilla[6][i] = 6;
    }
    casilla[0][0] = 1;//Torre
    casilla[0][1] = 2;//Caballo
    casilla[0][2] = 3;//Alfil
    casilla[0][3] = 4;//Reina
    casilla[0][4] = 5;//Rey
    casilla[0][5] = 3;//Alfil
    casilla[0][6] = 2;//Caballo
    casilla[0][7] = 1;//Torre
    casilla[7][0] = 1;//Torre
    casilla[7][1] = 2;//Caballo
    casilla[7][2] = 3;//Alfil
    casilla[7][3] = 4;//Reina
    casilla[7][4] = 5;//Rey
    casilla[7][5] = 3;//Alfil
    casilla[7][6] = 2;//Caballo
    casilla[7][7] = 1;//Torre
    for(i=0;i<=tablero-1;i++){//Ciclo dedicado a imprimir la pieza según el valor asignado
        for (j=0;j<=tablero-1;j++){//
            pieza = casilla[i][j];
            switch(pieza){
                case 0:
                    printf(".\t");
                    break;
                case 1:
                    printf("T\t");
                    break;
                case 2:
                    printf("C\t");
                    break;
                case 3:
                    printf("A\t");
                    break;
                case 4:
                    printf("Q\t");
                    break;
                case 5:
                    printf("K\t");
                    break;
                case 6:
                    printf("P\t");
                    break;
            }
        }
        printf("\n");
    }
    return 0;
}
