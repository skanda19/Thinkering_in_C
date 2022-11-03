#include<stdlib.h>
#include<stdio.h>

void factorial(int value, int* res);


int main(){

int v, resultado = 1;

do{
    printf("Ingresa el valor del numero factorial que quieres calcular: ");
    scanf("%d",&v);
    factorial(v,&resultado);
    printf("el factorial de %d es igual a %d\n",v, resultado);
    resultado = 1;
}while(v > 0);


    return 0;
}


void factorial(int value, int* res){

    for(int i = 1; i <= value; i++){
        *res = i * (*res);
    }

}