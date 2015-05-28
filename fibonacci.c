#include<stdio.h>
int main()
{	int suma=0,b=1,a=0, x;
	printf ("introduzca un numero: ");
	scanf("%d",&x);
		while(suma<=x){
			suma=b+a;
			a = b;
			b = suma;
		if (suma==x)
			printf("\n pertenece a la serie fibonacci");
		
	}
		if (suma!=x)
			printf("%i\n el siguiente numero de fibonacci es:",suma);
		return 0;

}
