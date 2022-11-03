#include<stdlib.h>
#include<stdio.h>
#define SIZE 7


void ConvC2f(int *arr, int size);


int main(){

    int arrC2F[SIZE] = {-10, 0, 10, 20, 30, 40, 50};
    ConvC2f(arrC2F,SIZE);

    for(int i = 0; i < SIZE; i++){
        printf("\tvalor \t%.2f \t= \t%d\n " ,((arrC2F[i]-32)*.55555),arrC2F[i]);
    }

    return 0;
}

void ConvC2f(int *arr, int size){
    for(int i = 0; i < size; i++){
        // F = (9/5 * C) + 32 
        arr[i] = (1.8 * arr[i]) + 32; 
    }
}

