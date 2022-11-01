#include <stdlib.h>
#include <string.h>
#include "realloc.h"




//The function is able to allocate the necessary memory block for the new size of arr. 

void* myRealloc(void* srcBlock, unsigned oldsize, unsigned newsize){
    // Var will serve to determined if the new memory allocation would be greater or less than what it is already allocated. 
   int i = 0, var;
   if (oldsize < newsize){
        var = oldsize;
   } else{
    var = newsize;
   }
   // By creating a char array will be able to extract the data store in the array.
   char *newPtr = (char*)malloc(newsize);
   for(i; i < var ;i++){
   newPtr[i] = ((char*)srcBlock)[i];
   }
   // freeing the allocated memory for the original array.
   free(srcBlock);
   // returning the new modified array. 
   return newPtr;
}