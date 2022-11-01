#include <stdlib.h>
#include <stdio.h>
#include "realloc.h"
#include "reallocF.c"



int main(){
    //
    int *ptr, *modArray;
    int numElements, newNumElements;
    //init ptr with the elements needed and init numElements to the number of elements.


    //DMA ptr
    ptr = (int*)malloc(sizeof(int) * numElements);
    if(!ptr) return 1;

    //uncomment the function below if you need to modify the original size of ptr
    //modArray = (int*)myRealloc(ptr,sizeof(int)*numElements,sizeof(int)*newNumElements);

    
    return 0;
}