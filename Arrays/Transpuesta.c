#include<stdio.h>
#define MAX 10

//Solo para magisteres en matematica xD//
int main (void){
	
int matriz[MAX][MAX], F, C, a=0, b=0;

  printf("Cuantas filas desea?: ");
	scanf("%d", &F);
	
  printf("Cuantos columnas desea?: ");
	scanf("%d", &C);
	
	for(a = 0;a < F;a++){
      for(b = 0;b < C;b++){
		  
          printf("Escriba los valores que desea ingresar en su matriz [%d][%d]:\t", a+1, b+1);
              scanf("%d", &matriz[a][b]);
              
      }
  }
  
	printf("\n\n\t\tEsta es la matriz original:");
	printf("\n\n");
		for(a = 0;a < F;a++){
			printf("\n\t\t");
		for(b = 0;b < C;b++){
          printf("  %d  ", matriz[a][b]);
          
          }
  }
  
	printf("\n\n\t\tEsta es la matriz transpuesta:");
	printf("\n\n");
	
		for(a = 0;a < C;a++){
			printf("\n\t\t");
		for(b = 0;b < F;b++){
			printf("  %d  ", matriz[b][a]);
          
          }
  }
  
  printf("\n");
  
  return 0;
  
    }
