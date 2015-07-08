/* 1-. ESCRIBIR UN PROGRAMA EN C QUE TOME 20 ENTEROS POSITIVOS COMO ENTRADA. 
 EL PROGRAMA DEBE ORDENAR EL ARREGLO DE TAL FORMA QUE TODOS LOS NUMEROS IMPARES
 APAREZCAN EN EL TOPE DEL ARREGLO SEGUIDO DE TODOS LOS NUMEROS PARES (MANTENIENDO EL 
 ORDEN EN EL CUAL  APARECIERON ORIGINALMENTE) ESTE ARREGLO ORDENADO DEBE SER IMPRESO */
#include <stdio.h>
int main() { 
int i, num, pares[100], impares[100],cont_par=0, cont_impar=0; 
int final[20],j,k;	
	for(i=1; i<=20; i++) { 
		printf("\nIntroduce un numero %d: ", i); 
		scanf("%d", &num); 
			if( num % 2 == 0){ 
				pares[e]=num; 
				cont_par++;
				e++;
			}
		else if( num % 2 == 1){ 
				impares[f]=num; 
				cont_impar++; 
				f++;
			} 
	} 
i=0;
j=0;
k=0;
	// La fusión se inicia
 while (i<cont_impar &&  i<cont_par ) {
   //pasa los valores del vector impar
	while (i < cont_impar ) {
		final[k] = impares[i];	
		i++;
		k++;
	}
  //pasa los valores del vector par
	while (j < cont_par) {
		final[k] = pares[j];
		k++;
		j++;
	}
 }

 
 //mostrar el vector final
 printf("\nel vector final es :");
 for (i = 0; i < cont_impar + cont_par; i++)
 printf("%d ", final[i]);
return 0; 
}
