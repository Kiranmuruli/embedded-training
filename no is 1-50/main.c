#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n=0,count=0;
    printf("enter the no\n");
    scanf("%d",&n);

    for(i=0; i<=n; i++)
    {

        if(n%i==0)
        {
            count ++;
            if(count==2);
        }
        printf("given no is prime\n");
        else
        {
            printf("given no is not prime\n");
        }
        return 0;
    }
}
