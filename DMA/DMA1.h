#if !defined(DMA1)
#define DMA1

int volatile size = 0;

int *createArr();                       //creating an Array based on user specifications
void printArr(int *arr, int size);      //prints the array 


#endif // DMA1
