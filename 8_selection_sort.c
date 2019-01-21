#include <stdio.h>
void selection_sort(int a[],int len)
{
	int i,j,temp;
	for(i=0;i<len;i++)
	{
		for(j=i+1;j<len;j++)
		{
			if(a[i]>a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
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
        selection_sort(a,10);
        printAll(a,10);
        return 0;
}
