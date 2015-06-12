#include<stdio.h>
int main(){
    int i=1, j;
    for(i=1;i<=10;i++){
        printf("\nTabla del %d:\n",i);
        for(j=1;j<=10;j++){
        printf("%d * %d = %d\t\n",i,j,i*j);
        }
    }
    return 0;
}


