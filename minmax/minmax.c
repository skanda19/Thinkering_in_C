#include<stdio.h>
#include<stdio.h>
#define SIZE 5


int findMinMax(int* arr, int* pMax, int* pMin,int size);

int main(){

    int max = 0, min = 100000000;
    int arrV[SIZE] = {3,2,1,4,5};
    findMinMax(arrV,&max,&min,SIZE);
    printf("max = %d\n",max);
    printf("min = %d\n",min);
    return 0;
}


int findMinMax(int *arr, int* pMax, int* pMin, int size){


    for(int i = 0; i < size; i++){
        if(arr[i] > *pMax){
            *pMax = arr[i];
        } if(arr[i] < *pMin) {
            *pMin = arr[i];
        }    
    }
}
