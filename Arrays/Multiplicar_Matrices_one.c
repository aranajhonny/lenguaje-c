#include<stdio.h>
 
 
int main(void){
	
  int af, ac, bf, bc, i, j, k;
  printf("Cantidad de filas que desea en la matriz A-->");
  scanf("%d", &af);
  printf("Cantidad de columnas que desea en la matriz A-->");
  scanf("%d", &ac);
  printf("Cantidad de filas que desea en la matriz B-->");
  scanf("%d", &bf);
  printf("Cantidad de columnas que desea en la matriz B-->");
  scanf("%d", &bc);
  if(ac!=bf){
             printf("no es posible hacer la multiplicación\n");
             break;
             return 0;
  }
  int A[af][ac], B[bf][bc], C[af][bc]; /*Rutina para cargar los valores*/
  for(i=0;i<af;i++){
      for(j=0;j<ac;j++){
          printf("Escribe el valor de la matriz 1 (%d, %d)-->",i+1, j+1);
          scanf("%d", &A[i][j]);
      }
  }
  printf("\n\n");
  for(i=0;i<bf;i++){
      for(j=0;j<bc;j++){
          printf("Escribe el valor de la matriz 2 (%d, %d)-->", i+1, j+1);
          scanf("%d", &B[i][j]);
      }
  }
 
  for(i=0;i<af;i++){
      for(j=0;j<bc;j++){
          C[i][j]=0;
          for(k=0;k<ac;k++){
              C[i][j]=(C[i][j]+(A[i][k]*B[k][j]));
          }
      }
  }
 
/*Rutina para imprimir*/
  printf("\n\n\t\t\t Matriz A");
  printf("\n");
  for(i=0;i<af;i++){
      printf("\n\t\t");
      for(j=0;j<ac;j++){
          printf("  %d  ", A[i][j]);
      }
  }
  printf("\n\n\t\t\t Matriz B");
  printf("\n");
  for(i=0;i<bf;i++){
      printf("\n\t\t");
      for(j=0;j<bc;j++){
          printf("  %6d  ", B[i][j]);
      }
  }
 
  printf("\n\n\t\t\t Matriz C");
  printf("\n");
  for(i=0;i<af;i++){
      printf("\n\t\t");
      for(j=0;j<bc;j++){
          printf("  %6d  ", C[i][j]);
      }
  }
  printf("\n");
}
