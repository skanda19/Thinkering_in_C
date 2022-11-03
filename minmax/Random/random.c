#include<stdio.h>
#include<stdlib.h>

void swap(int* x, int* y);

int main(){

    //bloque de codigo para denota pointer arithmetic. 
    
    int a = 0, b = 1;
    printf(" before swap a = %d and b = %d\n",a,b);
    swap(&a,&b);
    printf(" after swap a = %d and b = %d\n", a,b);
    
    /*int* ptr1;
    int grande1 = 80;
    ptr1 = &grande1;
    printf("%d",sizeof(ptr1));
    
    
    double test = 4;
    double* prtTest = &test;

    printf("size of double = %d\n",sizeof(int));

    printf("BEFORE memory addess of test is: %x\n", &test);
    printf("BEFORE memory addess that ptr is pointing to is: %x\n", prtTest);

    printf("AFTER memory addess that ptr is pointing to is: %x\n", prtTest+2);*/

    return 0;
}

void swap(int* x, int* y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}