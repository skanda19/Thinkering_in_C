#include<stdlib.h>
#include<stdio.h>

void inputArr(char* arrInput, int* size);

int main(){


    int size;
    char arr[size];
    //The user should input the size of the array and the array itself
    inputArr(arr,&size);
    printf("the array size is %d and the array is: \n",size);
    for (int i =  0; i  < size; i++){
        printf("%d \t",arr[i]);
    }


    return 0;
}


void inputArr(char* arrInput, int* size){
    int temp;
    printf("Please input the size of the array ");
    scanf("%d",&temp);
    *size = temp;
    printf("please enter the array(size of the array %d):",temp);
    for (int i = 0; i < temp; i++){
        scanf("%d",&arrInput[i]);
    }
}