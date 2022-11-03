#include <stdlib.h>
#include <stdio.h>
#include "realloc.h"
#include "reallocF.c"



int main(){
    //
    int *ptr, *modArray;
    int numElements, newNumElements;
    //init ptr with the elements needed and init numElements to the number of elements.
    numElements = 3;
    
    //DMA ptr
    ptr = (int*)malloc(sizeof(int) * numElements);
    if(!ptr) return 1;
    ptr[0]=1;
    ptr[1]=2;
    ptr[2]=3;

    //uncomment the function below if you need to modify the original size of ptr
    newNumElements = 4;
    modArray = (int*)myReallocmemcpy(ptr,sizeof(int)*numElements,sizeof(int)*newNumElements);
    modArray[3]=4;
    

    
    return 0;
}