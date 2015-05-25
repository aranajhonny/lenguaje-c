#include<stdio.h>
int main(){
    int dia;
    printf("¿Cuál día de la semana desea saber?: ");
    scanf("%d",&dia);
    if(dia<=7){
        switch(dia){
            case 0:
                printf("\nÉste día no existe.");
                break;
            case 1:
                printf("\nEl primer día de la semana es lunes.");
                break;
            case 2:
                printf("\nEl segundo día de la semana es martes.");
                break;
            case 3:
                printf("\nEl tercer día de la semana es miércoles.");
                break;
            case 4:
                printf("\nEl cuarto día de la semana es jueves.");
                break;
            case 5:
                printf("\nEl quinto día de la semana es viernes.");
                break;
            case 6:
                printf("\nEl sexto día de la semana es sábado.");
                break;
            case 7:
                printf("\nEl septimo día de la semana es domingo.");
                break;
        }
    }
    else{
        printf("La semana sólo tiene 7 días.");
    }
    return 0;
}
