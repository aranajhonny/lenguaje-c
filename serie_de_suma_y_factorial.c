#include<stdio.h>
int main(){
    int n, i, suma=1, factorial=1;
    printf("Ingrese el valor final de la serie: ");
    scanf("%d",&n);
    printf("%d * %d! ",suma,factorial);
    while(i<=n){
        factorial++;
        suma++;
        i++;
        printf("+ %d * %d! ",suma,factorial);
    }
    return 0;
}
