#include<stdio.h>
int main()
{	int suma=0,b=1,a=0, x;
	printf ("Digitar el numero donde termine la serie de Fibonacci: ");
	scanf("%d",&x);
		while(suma<=x){
			suma=b+a;
			a = b;
			b = suma;
		if (suma==x)
			printf("\n pertenece a la serie");
		
	}
		if (suma!=x)
			printf("%i\n",suma);
		return 0;

}
