#include <stdio.h>

void shell_sort(int a[],int len)
{
	int i,j,step,temp;
	for(step = len/2; step > 0; step /= 2)
	{
		for(i=step; i<len; i++)
		{
			temp = a[i];	
			for(j=i-step;j>=0&&temp<a[j];j-=step)
			{
				a[j+step] = a[j];
			}
			a[j+step] = temp;
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
        shell_sort(a,10);
        printAll(a,10);
        return 0;
}
