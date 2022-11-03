#include<stdio.h>
#include<stdlib.h>
#define SIZE 5


//inputArray function
void inputArray(int *arr,int size);

//display Array
void displayArray(int *arr, int size);


int main(){

    int grades[SIZE];
    inputArray(grades, SIZE);
    displayArray(grades,SIZE);


    return 0;
}

void inputArray(int *arr,int size){
    for(int i = 0; i<size; i++){
        printf("Enter value #%d ",i+1);
        scanf("%d",&arr[i]);
    }
}

void displayArray(int *arr,int size){
    for(int i = 0; i<size; i++){
        printf("Value #%d: %d\n", i + 1, arr[i]);
    }
}