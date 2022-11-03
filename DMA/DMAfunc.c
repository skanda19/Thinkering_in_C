#include<stdlib.h>
#include<stdio.h>
#include "DMA1.h"


//creating an Array based on user specifications
int *createArr(){
    int *myArr;

    printf("please enter the amount of elements of the array: ");
    scanf("%d",&size);

    myArr =  (int*)malloc(sizeof(int) * size);
    if(myArr == NULL){
        printf("ERROR");
        exit(1);
    }
    printf("Enter %d elements to your array.\n", size);
    for(int i = 0; i < size ; i++){
        printf("Enter number %d: ", i+1);
        scanf("%d",&myArr[i]);
    }
    return myArr;
}
//prints the array 
void printArr(int *arr, int size){
    int i = 0;
    for(i; i < size; i++){
        printf("%d\t",arr[i]);
    }
}