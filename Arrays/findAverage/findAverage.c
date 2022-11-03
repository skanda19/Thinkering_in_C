#include<stdio.h>
#include<stdlib.h>
#define SIZE 5

int sumArray(int *arr, int size);
double average(int *arr, int size);


int main(){

    int array[SIZE] = {100,54,82,94,35};
    double avg = 0;
    avg = average(array,SIZE);
    printf("the average is %.2f",avg);
    return 0;
}

int sumArray(int *arr, int size){
    int sum = 0;
    for(int i = 0; i < size; i++){
        sum = sum + arr[i]; 
    }
    return sum;
}

double average(int *arr,int size){
    int avg;
    avg = (sumArray(arr,size)/size);
    return (double)avg;
}