#include<stdio.h>
int main(){
    int i=2, signo=-1, cambsigno=2, suma;
    do{
        suma = signo * i;
        printf("%d,",suma);
        if(cambsigno==2){
            signo = signo * -1;
            cambsigno=0;
        }
        cambsigno++;
        i = i + 3;
    }while(i<=26);
    return 0;

}
