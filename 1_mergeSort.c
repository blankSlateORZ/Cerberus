#include <stdio.h>
#include <stdlib.h>

void merge(int a[],int left,int right);

void copyArray(int source[],int dest[],int len,int first);

void mergeSort(int arr[],int left,int right);

void mergeSort(int arr[],int left,int right)
{
    int mid;
	if(left < right)
	{
		//same as (right + left),but avoids overflow
		//int mid = left+(right-left)/2;
        mid = (left + right) / 2;
		mergeSort(arr,left,mid);
		mergeSort(arr,mid+1,right);

		merge(arr,left,right);
	}
}

void merge(int a[],int left,int right)
{
	int begin1 = left;
	int mid = (left+right)/2 ;
    	int begin2 = mid+1;
    	int k=0;
    	int newArrayLen = right-left+1;
    	int *b = (int*)malloc(newArrayLen*sizeof(int));
    	while(begin1<=mid && begin2<=right)
    	{
        	if(a[begin1]<=a[begin2])
        	{
         		b[k++] = a[begin1++];
        	}
        	else
        	{
			b[k++] = a[begin2++];
        	}
    	}
    	while(begin1<=mid)
    	{
        	b[k++] = a[begin1++];
    	}
    	while(begin2<=right)
    	{
        	b[k++] = a[begin2++];
    	}
    	copyArray(b,a,newArrayLen,left);
    	free(b);
}

void copyArray(int source[],int dest[],int len,int first)
{
    	int i;
    	int j=first;
    	for(i=0;i<len;i++)
    	{
        	dest[j] = source[i];
        	j++;
    	}
}

int main(void)
{
    	int arr[10] = {123,4,3,23,342,5,43,2,9,0};
    	mergeSort(arr,0,9);
    	int i = 0;
    	for(; i < 10; i++)
    	{
        	printf("%d ",arr[i]);
    	}
    	return 0;
}




