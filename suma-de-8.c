/*
 * 
 * Copyright 2015 jhonny arana <jhonnyjosearana@gmail.com>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * Escribir un programa C que lea exactamente 8 números y luego escriba la suma de todos ellos
 */


#include <stdio.h>

int main(int argc, char **argv)
{
	int num, suma,i;
		i=1;
		while(i<=8){
			printf("introduzca un numero");
			scanf("%d",&num);
			suma=suma+num;
			i++;
			}
	printf("la suma es %d", suma);
	return 0;
}

