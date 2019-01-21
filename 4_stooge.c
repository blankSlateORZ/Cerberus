#include<stdio.h>     
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
 
void stooge_sort(int a[], int left, int right)
{
 
	int t;
	if(a[left]>a[right])
		swap(&a[left], &a[right]);
	if(right-left+1 >= 3)
	{
		t=(right-left+1)/3;
		stooge_sort(a,left,right-t);
		stooge_sort(a,left+t,right);
		stooge_sort(a,left,right-t);
	}
 
}
 
int main(void)   
{
	int a[]={3, 5, 4, 6, 9, 7, 8, 0, 1};
	int n=sizeof(a)/sizeof(*a);
	printArray(a,n);
	stooge_sort(a,0,n-1);
	printArray(a,n);
	return 0;

}
