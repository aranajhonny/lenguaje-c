/*escribir un programa que tome como entrada un valor entre 1 y 7 e imprime el dia de la semana 
que corresponde al numero que se ingreso . si la entrada no es valida mostrar un mensaje */
#include<stdio.h>

int main(){
	int num_dia;
		printf("\nintroduzca el numero del dia de la semana que quiere mostrar:");
			scanf("%d",&num_dia);
		switch(num_dia){
				case 1: printf("El dia es lunes\n");
						break;
				case 2: printf("El dia es martes\n");
						break;
				case 3: printf("El dia es miercoles\n");
						break;
				case 4: printf("El dia es jueves\n");
						break;
				case 5: printf("El dia es viernes\n");
						break;
				case 6: printf("El dia es sabado\n");
						break;
				case 7: printf("El dia es domingo\n");
						break;
				default:printf("el dato introducido no es correcto\n");
	
				} 
	
	return 0;
	}
