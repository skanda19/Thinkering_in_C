#include<stdio.h>
#include<stdlib.h>

void getValue(int *x);
void avgUpdate(int x, int y, float* avg);



int main() {

    int a, b;
    float avg;
    getValue(&a);
    getValue(&b);
    avgUpdate(a,b,&avg);
    printf("the average of %d and %d is %.2f",a,b,avg);
    

    return 0;
}

void getValue(int *x){
    int chr;
    printf("input the value ");
    scanf("%d",&chr);
    *x = chr;
}

void avgUpdate(int x, int y, float* avg){
    *avg = (x + y) / 2;
}