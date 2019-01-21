#include <stdio.h>



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
        heap_sort(a,10);
        printAll(a,10);
        return 0;
}
