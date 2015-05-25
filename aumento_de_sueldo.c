#include<stdio.h>
int main(){
    float actsueld, nuevsueld, aument;
    char nmbr[20], depr[20];
    printf("¿Cuál es su primer nombre?: ");
    scanf("%s",&nmbr);
    printf("¿En cuál departamento trabaja?: ");
    scanf("%s",&depr);
    printf("¿Cuál es su sueldo actual?: ");
    scanf("%f",&actsueld);
    if (actsueld<=900000){
        aument = actsueld * 20 / 100;
    }
    if (900000<actsueld && actsueld<=1300000){
        aument = actsueld * 10 / 100;
    }
    if (1300000<actsueld && actsueld<=1800000){
        aument = actsueld * 5 / 100;
    }
    if (actsueld>1800000){
        aument = actsueld * 4 / 100;
    }
    nuevsueld = actsueld + aument;
    printf("\nNombre del empleado: %s\n",nmbr);
    printf("\nDepartamento: %s\n",depr);
    printf("\nSueldo actual: %f\n",actsueld);
    printf("\nAumento: %f\n",aument);
    printf("\nSueldo nuevo: %f\n",nuevsueld);
    return 0;
}
