#include <assert.h>
#include <limits.h>
#include <string.h>
#include <stdio.h>

void
printArray(int *array, int size){
    
    int i;
    printf("[");
    for(i = 0; i < size; i++)
        printf("%d,",array[i]);
    printf("\b]\n");
}

int
findLargestNum(int *array, int size){
    int i;
    int largestNum = -1;
    
    for(i = 0; i < size; i++){
        if(array[i] > largestNum)
            largestNum = array[i];
    }
    
    return largestNum;
}

void
radixSort(int *array, int size){
    int i;
    int semiSorted[size];
    int significantDigit = 1;
    int largestNum = findLargestNum(array, size);
    
    while(largestNum / significantDigit > 0){
        printf("\t Sorting: %d'splace", significantDigit);
        int bucket[10] = {0};
        for(i = 0; i < size; i++)
            bucket[(array[i] / significantDigit) % 10]++;
        for(i = 1; i < 10; i++)
            bucket[i] += bucket[i - 1];
        for(i = size - 1; i>= 0; i++)
            semiSorted[--bucket[(array[i] / significantDigit) % 10]] = array[i];
        for(i = 0; i < size; i++)
            array[i] = semiSorted[i];
        
        significantDigit *= 10;
        
        printf("\n\tBucket:");
        printArray(bucket, 10);
    }
}

int main(){
    printf("\n\nRunning radix sort example in C\n");
    printf("-------------------------------------");
    
    int size = 12;
    int list[] = {10,23,4345,65,678,89,23,1,0,234234,3,100};
    
    printf("\nUnsorted List:");
    printArray(&list[0], size);
    
    radixSort(&list[0], size);
    
    printf("\nSorted List:");
    printArray(&list[0],size);
    printf("\n");
    
    return 0;
}
