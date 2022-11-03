#include<stdlib.h>
#include<stdio.h>
#define SIZEARR1 5
#define SIZEARR2 8

void interseccion(int* ptrA,int* ptrB, int size1, int size2,int* arrT);

int main(){
    
    int arr1[SIZEARR1] = {1,2,2,4,5};
    int arr2[SIZEARR2] = {0,2,2,4,4,4,6,9};
    int arrtest[SIZEARR2] = {0,0,0,0,0,0,0,0};
    //2,4
    // 4 6 8
    // 5 7 9
    // imprimir que no se dectecto nada

    interseccion(arr1,arr2,SIZEARR1,SIZEARR2,arrtest);

    return 0;
}

void interseccion(int* ptrA, int* ptrB, int size1, int size2, int* arrT){
    int cont=0;
    for(int i = 0; i <size1; i++){
        for(int j = 0; j < size2; j++){
            if(ptrA[i] == ptrB[j]){
                arrT[cont] = ptrA[i];
                cont++;
                i++;
                if(arrT[cont] == ptrB[j+1]){
                    j++;
                }
            }
            if(ptrA[i] == arrT[cont]){
                i++;
            }
        }
    }
}