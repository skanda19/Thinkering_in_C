#include<stdio.h>
#include<stdlib.h>
#define SIZE 5

/*Write a function checks if the array is "Really Sorted", "Not Sorted"
The function should RETURN 1 and PASS 1 By Reference if the array is "Really Sorted".
The function should RETURN 1 and PASS 0 By Reference if the array is "Sorted"
The function should RETURN 0 and PASS 0 By Refenrece if the array is "Not Sorted"*/


int neighbor(int* arr,int size, int* val);
void printResult(int returnVal,int passedRef);

int main(){

    int passRef, retVal;

    int arr1[SIZE] = {1,2,5,7,10};
    retVal = neighbor(arr1, SIZE, &passRef);
    printResult(retVal,passRef);


    int arr2[SIZE]= {1,2,2,5,10};
    retVal = neighbor(arr2, SIZE,&passRef);
    printResult(retVal,passRef);

    int arr3[SIZE] = {1,2,5,3,10};
    retVal = neighbor(arr3, SIZE,&passRef);
    printResult(retVal,passRef);

    return 0;
}


int neighbor(int* arr, int size, int* val){
    int temp = 0, tempEqual = 0, tempLess = 0;

    for(int i = 0; i < size; i++){
        if(arr[i] < arr[i + 1]){
            temp++;
            
        }else if(arr[i] == arr[i+1]){
           tempEqual++;
        }else{
            tempLess++;
        }
        if (temp == size && tempEqual < 1){
           *val = 1;
           return 1;
        }
        if(tempEqual > 0){
            *val = 1;
            return 0;
        }
        if (tempLess > 0){
            *val = 0;
            return 0;
        }
        
    }
    return 0;
}

void printResult(int returnVal, int passedRef){
    if(returnVal == 1 && passedRef == 1){
        printf("arr is Really Sorted\n");
    } if(returnVal == 1 && passedRef == 0 || returnVal == 0 && passedRef == 1){
        printf("arr is Sorted\n");
    } if(returnVal == 0 && passedRef == 0){
        printf("arr is Not Sorted\n");
    }
}