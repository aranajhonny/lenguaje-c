#include<stdio.h>
int main(){
    int edad, diaact, mesact, anioact, dianaci, mesnaci, anionaci;
    printf("¿Cuál es la fecha actual?\n");
    printf("\nDía/Mes/Año. Ejemplo:(5/5/2015): ");
    scanf("%d/%d/%d",&diaact,&mesact,&anioact);
    if(diaact<1){
        printf("\nEl mes no tiene 0 días.\n");
        return 0;
    }
    if(diaact>31){
        printf("\nEl mes sólo tiene 31 días.\n");
        return 0;
    }
    if(mesact<1){
        printf("\nEl año no tiene 0 meses.\n");
        return 0;
    }
    if(mesact>31){
        printf("\nEl año sólo tiene 12 meses.\n");
        return 0;
    }
    if(anioact<1000){
        printf("\n¿Usted vive en la epoca de Matusalén?.\n");
        return 0;
    }
    printf("\n¿Cuál es tu fecha de nacimiento?\n");
    printf("\nDía/Mes/Año. Ejemplo:(5/5/1997): ");
    scanf("%d/%d/%d",&dianaci,&mesnaci,&anionaci);
    if(dianaci<1){
        printf("\nEl mes no tiene 0 días.\n");
        return 0;
    }
    if(diaact>31){
        printf("\nEl mes sólo tiene 31 días.\n");
        return 0;
    }
    if(mesact<1){
        printf("\nEl año no tiene 0 meses.\n");
        return 0;
    }
    if(mesact>31){
        printf("\nEl año sólo tiene 12 meses.\n");
        return 0;
    }
    if(anionaci<1000){
        printf("\n¿Usted nació antes de Cristo?.\n");
        return 0;
    }
    if(anionaci==anioact){
        printf("\nUsted no lleva un año de haber nacido.\n");
        return 0;
    }
    if(anionaci!=anioact){
       edad = anioact - anionaci;
       if(mesact<mesnaci || diaact<dianaci){
            edad--;
       }
    }
    if(anioact>2015){
        printf("\nUsted tendrá %d años de edad.\n",edad);
    }
    if(anioact==2015){
        printf("\nUsted tiene %d años de edad.\n",edad);
    }
    if(anioact<2015){
        printf("\nUsted tuvo %d años de edad.\n",edad);
    }
    return 0;
}
