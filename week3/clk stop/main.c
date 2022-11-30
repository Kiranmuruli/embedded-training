#include <stdio.h>
#include <stdlib.h>


int main()
{
    int i,min,s,j;
    printf("enter the minute\n");
    scanf("%d",&min);
    s=min*60;
    for(i=0;i<min;i++)
    {
        for(j=0;j<s;j++)
        {
            printf("%d:%d\n",i,j);
        }

    }
    return 0;
}
