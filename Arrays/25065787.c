/*
 jhonny jose arana nieves 
 c.i 25065787
 */
#include <stdio.h>
int main(void){
	int matrix[7][7],f,c,A=0,s;
	for(f=0; f<=7; f++){
	  for(c=0; c<=7; c++){	  
		  matrix[f][c]= A;//llena valores dentro de la matriz
		  A = A + 6;
		  }
	}
	printf("\nEsta es la matriz original:\n\n");
	for(f=0; f<=6; f++){
		for(c=0; c<=6; c++){
			printf("%d\t", matrix[f][c]); //imprime la matriz	
			}
		printf("\n"); 
				
		}
	printf("\nEsta es la matriz transpuesta:\n\n");
	for(f=0; f<=6; f++){
		for(c=0; c<=6; c++){
			printf("%d\t", matrix[c][f]); //imprime la matriz	transpuesta
			}
		printf("\n"); 			
		}
s=0;
for(f=2; f<=4; f++){
	  for(c=2; c<=4; c++){
		
		if(f==2 || f==4)
		s = s + matrix[f][c]; //suma fila 0 y fila ultima
		
		}
	}
	for(f=1; f<=5; f++){
	  for(c=2; c<=4; c++){
		
		if(f==2 || f==4)
		s = s + matrix[f][c]; //suma fila 0 y fila ultima
		
		}
	}
	for(f=2; f<=4; f++){
	  for(c=1; c<=5; c++){
		
		if(c==2 || c==4)
		s = s + matrix[f][c]; //suma columna 0 y columna ultima
		
		
		}
	}
		s = s + matrix[1][1] + matrix[1][5] + matrix[5][1] + matrix[5][5]; //suma las 4 esquinas

  printf("\nLa suma de los bordes es igual a: %d",s);
	return 0;
}
 
