
#include <stdio.h>

int main(void){
	int pares[20], impares[20],final[20];
	int num,cont_par=0,cont_impar=0,i,a,b;
	for(i=0;i<=5;i++){
		printf("introduzca un entero:");
		scanf("%d",&num);
			if(num%2==0){
				pares[a] = num;
				cont_par++;
				
				}
			else if(num%2==1){
				impares[b] = num;
				cont_impar++;
				
				}
		
		}	
	for(i=0;i<=5;i++){
		printf("%d",pares[a]);
		
		}
	
	return 0;
}

