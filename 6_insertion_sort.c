#include <stdio.h>

void insertionSort(int a[],int len)
{
	int i,j,temp;
	for(i=1; i<len;i++)
	{
		temp = a[i];//抽牌
		for(j=i;j>0&&a[j-1]>temp;j--)
		{
			a[j] = a[j-1];//挪牌
		}
		a[j] = temp;//插牌
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
        insertionSort(a,10);
        printAll(a,10);
        return 0;
}
