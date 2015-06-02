/* programa que separa un entero de 2 digitos */
#include <stdio.h>
int main(){
  int num;
  int digito_der;
  int digito_izq;
   printf("introduszca el numero de 2 cifras");
   scanf("%d", &num);
      digito_izq = num/10;
      digito_der = num%10;
    printf("el numero a separar es%d\n", num);
    printf("el numero izquierdo es %d\n", digito_izq);
    printf("el numero iderecho es %d\n", digito_der);
  return 0;
}
