#include <stdio.h>
int main(){
	int a=1 ,b=0 , acum  , fibo=0;
		printf("esta es la serie original:\n");
			for(acum=1;acum<=20;acum++){
				printf("%d ",fibo);
				fibo= a + b;
				a = b;
				b = fibo;
	}
  	printf("\n Esta es la serie invertida:\n");
			for(acum=20;acum>=1;acum--){
				fibo= b - a;		
				b = a;
				a = fibo;
				printf("%d ",b );
				
	}	
	printf("\n ");
	return 0;
}
