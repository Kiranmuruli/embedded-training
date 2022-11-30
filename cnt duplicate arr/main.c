#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[5],i,n=5,largest1,largest2;

    printf("enter elements\n");
    for(i=1;i<=n;i++)
    {
        scanf("%d",&arr[i]);
    }
largest1=arr[0];
for(i=0;i<=n;i++)
{
    if (arr[i]>largest1)
    {
        largest1=arr[i];
    }
}
largest2=arr[0];
for(i=0;i<n;i++)
{
    if(arr[i]>largest2 &&arr[i]){

        largest2=arr[i];
}
}
    return 0;
}
