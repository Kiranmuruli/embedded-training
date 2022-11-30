#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=5,i;
    int array[n];
    int *ptr[n];
    printf("enter the no of elements\n");

    for (i=0;i<n;i++)
    {
    scanf("%d",&array[i]);
    ptr[i]=&array[i];
    }

    for(i=0;i<n;i++)
{
    printf("%d\n",*ptr[i]);
}
    return 0;
}
