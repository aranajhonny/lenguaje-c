#include<stdio.h>
#define tam 20
int main(void){
	int vector[tam], par[tam],final[tam], impar[tam], i, j=0, k=0, contp=0, conti=0;
	for(i=0;i<=tam-1;i++){
        printf("Introduzca el valor del numero en la posicion %d: ",i+1);
        scanf("%d",&vector[i]);
        if(vector[i]%2==1){
            impar[j] = vector[i];
            j++;
            conti++;
        }
        else if(vector[i]%2==0){
            par[k] = vector[i];
            k++;
            contp++;
        }
    }
    printf("\n\nArreglo ingresado: ");
	for(i=0;i<=tam-1;i++){
		printf("%d ",vector[i]);
	}
    i=0;
    j=0;
    k=0;
    while(i<conti){
		final[k] = impar[i];
		i++;
		k++;
	
	while(j<contp){
		final[k] = par[j];
		k++;
		j++;
	}
	printf("\n\nArreglo final: ");
	for(i=0;i<conti+contp;i++){
		printf("%d ",final[i]);
	}
	return 0;
}
