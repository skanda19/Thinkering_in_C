#include<stdio.h>
#include<stdlib.h>
#include"voidPointer.h"
#include"functionVoidPointer.c"


void genericSwap(void *a, void *b, int size); //we assume the size > 0

int main(){

    int a = 5, b = 7;

    //before the swap
    printf("a =  %d and b = %d\n",a,b);
    //swap function
    genericSwap(&a,&b,sizeof(int));
    //after the swap
    printf("a =  %d and b = %d\n",a,b);
    return 0;
}


/*void genericSwap(void *a, void *b, int size){

// size specifies the number of bytes
    void *tempMemory =  malloc(size);

// Memory copy function 
// void *memcpy(void *dest, const void *src, size_t num)
    memcpy(tempMemory, a, size);
    memcpy(a, b, size);
    memcpy(b, tempMemory, size);

    free(tempMemory);

}*/