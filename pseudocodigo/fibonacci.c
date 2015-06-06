algoritmo fibonacci.


variables
entero suma=0 , a=0, b=1, x ;
inicio
	mostrar "introduzca un numero: ";
	leer x ;
		mientras(suma<=x) hacer {

			suma = b+a;
	   		   a = b;
		   	   b = suma;

		si (suma==x)
			mostrar " pertenece a la serie fibonacci ";
	
		si no (suma!=x)
			printf("el siguiente numero de fibonacci es:",suma);
			
		} fin mientras	
		
fin 
