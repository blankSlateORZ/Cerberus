#include<stdio.h>    
#include<string.h>   
#include<math.h>   
#include<ctype.h>   
#include<stdbool.h>
#include<stdlib.h>
#include<time.h>
 
void swap(int *a, int *b)   //交换两元素的值
{
	int t;
	t=*a;
	*a=*b;
	*b=t;
}
 
void printArray(int a[], int count)   //打印数组元素
{
	int i;
	for(i=0; i<count; i++)
		printf("%d ",a[i]);
	printf("\n");
}
 
unsigned int Random1(int a, int b)  //随机生成[a,b)之间的数
{
	return (rand()%(b-a)+a);
}
 
unsigned int Random2(int n)  //随机生成[0,n)之间的数
{
	return (rand()%n);
}
 
bool inorder(int a[], int n)  //判断序列是否已经有序
{
	int i;
	for(i=0; i<n; i++)
	{
		if(a[i] > a[i+1])  return false;
	}
	return true;
}
 
void shuffle(int a[], int n)
{
	int i,swapPosition;
	for(i=0; i<n; i++)
	{
		swapPosition = Random2(i+1);
		swap(&a[i],&a[swapPosition]);
	}
}
 
void bogo_sort(int a[], int n)
{
	while(!inorder(a,n))
		shuffle(a,n);
}
 
int main(void)   
{
	int a[]={ 3, 5, 4, 6, 9, 7, 8, 0, 1};
	int n=sizeof(a)/sizeof(*a);
	srand((unsigned)time(NULL));  
	printArray(a,n);
	bogo_sort(a,n);
	printArray(a,n);	
	return 0;
}
