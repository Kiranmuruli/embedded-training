#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,n,small,large;
    printf("enter the size\n");
    scanf("%d",&n);
int a[n];
    printf("enter the elements\n");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);

    }
    small=a[0];
    for(i=0; i<n; i++)
    {
        if(a[i]<small)
        {
            small=a[i];
        }

    }

    printf("the small num is %d\n",small);

    return 0;
}
