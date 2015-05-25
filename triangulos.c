/*
 * 
 * Copyright 2015 jhonny arana <jhonnyjosearana@gmail.com>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 *escribir un programa en C que lea tres números e indique el
 *tipo de triángulo que forman (isósceles, equilatero, escaleno). 
 *Comprobar que los números realmente formen un triángulo, sino emitir el error.
 * 
 */
#include <stdio.h>

int main(int argc, char **argv)
{
	int x,y,z;
		printf("\nintroduzca el valor del lado A\t");
		scanf("%d", &x);
		printf("\nintroduzca el valor del lado B\t");
		scanf("%d", &y);
		printf("\nintroduzca el valor del lado C\t");
		scanf("%d", &z);
		printf("\n\n");
	   if( x==y && x==z ) {
			printf("el triangulo es equilatero\n" );
		}
					else if( x==y || x==z || y==z){
						printf("el triangulo es isosceles\n" );
					}
							else if( x!=y || x!=z || y!=z){
									printf("el triangulo es escaleno" );
							}
								else{
										printf("No es un triagulo\n" );
									}
	return 0;
}
