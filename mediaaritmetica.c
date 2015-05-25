/*
 * 
 * Copyright 2015 jhonny arana <jhonnyjosearana@gmail.com>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 *Programa que lea una serie de números (leer hasta que llegue el cero por ejemplo) y que calcule su media aritmética
 */

#include <stdio.h>
int main(){
int i,suma=0,cont=0;
	printf("\nIntroduzca los valores para calcular la media.");
	do{
		printf("\nNúmero: ");
			scanf("%i",&i);
		suma+=i;
		if (i!=0) cont++;
	}while (i!=0);
		if(cont!=0)
			printf("\nLa Media Es: %5.f",(float)suma/cont);
		else
			printf("\nNo hubo números");
return 0;
}
