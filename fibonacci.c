#include<stdio.h>
int main(){	
	int suma=0,a=0,b=1, x;
	printf ("introduzca un numero: ");
	scanf("%d",&x);
	
		while(suma<=x){
			suma=b+a;
			a = b;
			b = suma;
			
				if (suma==x){
					printf("%d ,",suma);
			
				}
	    
	   
				else if (suma!=x){
					printf("%d ,",suma);
				
				}	
		
		suma++;
		
		}	
		
		return 0;

}

