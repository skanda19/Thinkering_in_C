#include<stdlib.h>
#include<stdio.h>
#include"voidPointer.h"

void genericSwap(void *a, void *b, int size){

// size specifies the number of bytes
    void *tempMemory =  malloc(size);

// Memory copy function 
// void *memcpy(void *dest, const void *src, size_t num)
    memcpy(tempMemory, a, size);
    memcpy(a, b, size);
    memcpy(b, tempMemory, size);

    free(tempMemory);

}