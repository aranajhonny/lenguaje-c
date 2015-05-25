/*Crear un programa C que lea cantidades y precios 
 y al final indique el total de la factura. Primero se pregunta:
Introduzca la cantidad vendida
tras lo cual el usuario introducirá un número entero positivo. Después se pregunta:
Introduzca el precio
que será un número decimal positivo. La lectura termina cuando en la
cantidad se introduzca un cero. Si es así se escribirá el total.
*/
#include <stdio.h>
int main(){
int n;
double precio, total=0;

do{
	do{
		printf("\nIntroduzca la cantidad vendida: ");
		scanf("%d",&n);
		if(n<0) printf("Cantidad no valida");
	}while(n<0); 
		if (n>0){
		printf("Introduzca el precio: ");
			do{
				scanf("%lf",&precio);
				if(precio<0) printf("Precio no valido");
				else total+=n*precio;
		}while(precio<0);
	}
}while(n!=0); 

printf("Total vendido = %f", total);

return 0;
}
