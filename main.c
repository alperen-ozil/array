#include <stdio.h>
#include <stdlib.h>
int findSumOfArray(int * ,int);
int main(int argc, const char * argv[]) {
    int size;
    printf("size of array: ");
    scanf("%d",&size);
    int *firstArray;
    firstArray=malloc(size * sizeof(int));
    printf("\n");
    for(int i=0;i<size;i++){
        firstArray[i]=i+1;
    }
    for(int i=0;i<size;i++){
        printf("%d\n",firstArray[i]);
    }
    printf("sum of array : %d\n",findSumOfArray(firstArray, size));
    return 0;
}
int findSumOfArray(int * array, int sizeOfArray){
    int sum=0;
    for(int i=0;i<sizeOfArray;i++){
        sum+=*(array+i);
    };
    return sum;
}
