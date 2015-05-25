/*realizar un programa en c que sume todos los numeros impares del 1 al 1000*/
#include<stdio.h>

int main(){
	int inicial,primo,final, total;
	inicial=0;
	final= 0;
	total = 0;
		while(total<1000){
		
		primo= (2 * inicial) + 1;
		
		final = final + primo;
		
		total = total + 1;
		
		inicial++ ;
		
		}
	
		printf("la suma de todos los impares del 1 al 1000 es:\t%d\n", final);
	
	return 0;
}
