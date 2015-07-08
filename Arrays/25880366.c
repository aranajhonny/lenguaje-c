#include<stdio.h>
int main(void){
    int i, j, valor=0, suma, suma2;
    int matriz[7][7];
    for(i=0;i<7;i++){
        for(j=0;j<7;j++){
            matriz[i][j] = valor;
			valor= valor + 6;
        } 
    }
    
    printf("Esta es su matriz Original: \n");
    for(i=0;i<7;i++){
        for(j=0;j<7;j++){
            printf("%d\t",matriz[i][j]);
        }
        
    printf("\n ");  
  }
for(j=0;j<7;j++){
        for(i=0;i<7;i++){
            matriz[7][7] = matriz[j][i];
        }
    }
    printf("Esta es su transpuesta: \n");
    for(j=0;j<7;j++){
        for(i=0;i<7;i++){
            printf("%d\t",matriz[i][j]);
        }
        printf("\n");
	}
	
	
	
	printf("los suma de los valores en X en el medio de la traspuesta es: \n");
	suma = matriz [1][1] + matriz [2][2] + matriz [3][3] + matriz [4][4] + matriz [5][5];
	suma2 = matriz [5][5] + matriz [4][4] + matriz [3][3] + matriz [2][2] + matriz [1][1]
 	printf ("%d %d", suma + suma2);
	return 0;
}

