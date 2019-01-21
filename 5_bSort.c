#include <stdio.h>

void bubble_sort(int a[],int len)
{
	int i,j,flag;
	for(i=len-1; i>=0; i--)
	{
		flag = 0;
		for(j=0;j<i;j++)
		{
			if(a[j] > a[j+1])
			{
				int temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
				flag = 1;
			}
		
		}
		if(flag == 0) break;
	}

}

void printAll(int a[],int len)
{
	int i;
	for(i = 0; i < len; i++)
	{
		printf("%d\n",a[i]);
	}

}


int main()
{

	int a[10] = {1,123,23,435,6,56,7,87,2,0};
	bubble_sort(a,10);
	printAll(a,10);
	return 0;
}
