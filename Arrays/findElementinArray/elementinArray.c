#include<stdlib.h>
#include<stdio.h>
#define SIZE 4 
//A function toi serach if an element is in a given array

int findIfKeyInArray(int *arr, int size, int key){
    int i;
    for(i=0; i < size; i++){
        if(arr[i] == key)
        return 1;
    }
    return 0;
}


int main(){

    int grades[SIZE] = {80,85,72,90};
    int result;
    result = findIfKeyInArray(grades,SIZE,856);
    printf("whats the value = %d",result);


    return 0;
}