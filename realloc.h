#if !defined(realloc)
#define realloc

//definition of the universal realloc function
void* myRealloc(void* srcBlock, unsigned oldsize, unsigned newsize);




#endif // realloc