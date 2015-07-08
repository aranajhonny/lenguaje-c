#include<stdio.h>

int main (void){
	
	int matriz[7][7],f, c, tras=0, temp=0;
	
	
	for(f=0;f < 7;f++){
		for(c=0;c < 7;c++){
			
			matriz[f][c] = tras;
				tras = tras + 6;
			}
		}
		
		printf("\nEsta es la matriz original[f][c]:  \n\n\n");
		for(f=0;f < 7;f++){
			for(c=0;c < 7;c++){
				printf("%d\t", matriz[f][c]);
			}
			printf("\n\n\n");
		}
		
		printf("\nEsta es la matriz transpuesta: \n\n\n");
		for(f=0;f < 7;f++){
			for(c=0;c < 7;c++){
				printf("%d\t", matriz[c][f]);
			}
			printf("\n\n\n");
		}
		

		
		for(f=1;f<=6;f++){
			for(c=1;c<=6;c++){
				
				if((f==1 || f==5) && (c==1 || c==5)){
					temp = temp + matriz[c][f];
				
				if((f==2 || f==3 || f==4) && (c==2 || c==3 || c==4)){
					temp = temp + matriz[c][f];
					
					matriz[c][f]=0;
					
				if((f==1 || f==5) && (c==2 || c==3 || c==4)){
					temp = temp + matriz[c][f];
					
				if((f==2 || f==3 || f==4) && (c==1 || c==5)){
					temp = temp + matriz[c][f];	
					
					
					
					
					
				}
			}
		}	
	}	
					
				}

			}
				printf("\n\n");
                                printf("\nEsta es la Suma de la matriz transpuesta: \n\n\n");

				return 0;
			}	
		
	
	
	
	
	
	

