#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size,i,j,temp=0;
    printf("enter the size\n");
    scanf("%d",&size);
    printf("enter the elements\n");
    int arr[size];
    int *ptr[size];
    for(i=0; i<size; i++)
    {
        scanf("%d",&arr[i]);
        ptr[i]=&arr[i];
    }
    for(i=0; i<=(size/2)-1; i++)
    {
        temp=*ptr[i];
        *ptr[i]=*ptr[size-i-1];
        *ptr[size-i-1]=temp;
    }
    for(i=0; i<size; i++)
    {
        printf("%d\n",*ptr[i]);
    }


    return 0;
}
