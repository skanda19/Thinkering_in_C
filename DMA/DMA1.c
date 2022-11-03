#include<stdlib.h>
#include<stdio.h>
#include "DMAfunc.c"
#include "DMA1.h"


void main(){
    int *arr;                   
    arr  = createArr();
    printArr(arr, size);
}

