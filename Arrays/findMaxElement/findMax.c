#include<stdlib.h>
#include<stdio.h>
#define SIZE 4


void findMax(int *arr,int size, int *max);

int main(){

    int grades[SIZE] = {80,91,72,90};
    int max = 0;
    findMax(grades,SIZE,&max);

    printf("max value is %d",max);

    return 0;
}

void findMax(int *arr,int size, int *max){
    
    for(int i = 0; i < size; i++){
        if(arr[i] > *max)
        *max = arr[i];
    }

}