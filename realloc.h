#if !defined(realloc)
#define realloc

//definition of the universal realloc function
void* myRealloc(void* srcBlock, unsigned oldsize, unsigned newsize);

//def universal realloc function memcpy
void* myReallocmemcpy(void* srcBlock, unsigned oldsize, unsigned newsize);




#endif // realloc