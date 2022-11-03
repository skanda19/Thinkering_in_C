 #include<stdio.h>
#include<stdlib.h>

void swap(int* x, int* y);

int main(){
    
    int a, b;

    printf("Please, Input the first number: ");
    scanf("%d",&a);
    printf("\nPlease, input the second number: ");
    scanf("%d",&b);
    printf(" before swap a = %d and b = %d\n",a,b);
    swap(&a,&b);
    printf(" after swap a = %d and b = %d\n",a,b);

    return 0;
}

void swap(int* x, int* y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}