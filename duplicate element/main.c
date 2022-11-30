#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[5],i,n,j,ctr=0;
    printf("enter the size of elements\n");
    scanf("%d",&n);
    printf("enter the elements\n");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
         for(i=0;i<n;i++)
    {
    for(j=i+1;j<n;j++)
    {
        if(arr[i]==arr[j])
           {
              ctr++;
    }
    }

    }
    printf("the duplicating num are %d", ctr);
    return 0;
}
