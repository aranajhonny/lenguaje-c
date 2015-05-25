#include<stdio.h>
int main(){
    int i, c1, c2, c3, c4, c5, temp1, temp2, temp3, suma;
    for(i=0;i<=20000;i++){
        if(10<=i && i<=99){
            c1 = i / 10;
            c2 = i % 10;
            suma = c2 * 10 + c1;
        }
        if(100<=i && i<=999){
            c1 = i / 100;
            temp1 = i % 100;
            c2 = temp1 / 10;
            c3 = temp1 % 10;
            suma = c3 * 100 + c2 * 10 + c1;
        }
        if(1000<=i && i<=9999){
            c1 = i / 1000;
            temp1 = i % 1000;
            c2 = temp1 / 100;
            temp2 = temp1 % 100;
            c3 = temp2 / 10;
            c4 = temp2 % 10;
            suma = c4 * 1000 + c3 * 100 + c2 * 10 + c1;
        }
        if(10000<=i && i<=20000){
            c1 = i / 10000;
            temp1 = i % 10000;
            c2 = temp1 / 1000;
            temp2 = temp1 % 1000;
            c3 = temp2 / 100;
            temp3 = temp2 % 100;
            c4 = temp3 / 10;
            c5 = temp3 % 10;
            suma = c5 * 10000 + c4 * 1000 + c3 * 100 + c2 * 10 + c1;
        }
        if(suma==i){
            printf("%d\t",i);
        }
    }
    return 0;
}
