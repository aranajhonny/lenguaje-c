/*
muestra la serie fibonacci hasta un numero de entrada.

 */
#include<iostream>
using namespace std;

int main(void)
{
	int suma=0,b=1,a=0, x;
	
	cout << endl << "Digitar el numero donde termine la serie de Fibonacci: ";
	cin >> x;
	
	//IMPRIME LA SERIE DE FIBONACCI HASTA EL NUMERO
	cout << endl << endl;
	while(suma<=x)
	{
		cout << suma << ", ";
		suma=b+a;
		a = b;
		b = suma;
	}
	
	cout << endl << endl << endl;
	
	
	return 0;
}
