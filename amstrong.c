#include<stdio.h>
int main(){
    int num,r,sum,temp;
    int ent;
    printf("introduzca un numero entero positivo: ");
		scanf("%d",&ent);
    if(ent>=0)
		printf("los numeros Armstrong hasta ese numero son : ");
		for(num=1;num<=ent;num++){
		temp=num;
		sum = 0;
			while(temp!=0){
				r=temp%10;
				temp=temp/10;
				sum=sum+(r*r*r);
			}
				if(sum==num)
				printf("%d ",num);
			}
    return 0;
}
