#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,n;
    int arr[10]= {1,2,1,2,3,4,2};
    n=sizeof(arr);

    for(i=1;i<=n;i++)
    {

        for(j=i+1;j<=n;j++)
        {
             if (arr[i]==arr[j]);

    printf(" %d\n",arr[j]);
        }
}

return 0;
}
