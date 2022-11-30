#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,ctr=0;
    printf("enter the number\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if (n%i==0)
        {
            ctr++;
        }
    }
  if(ctr==2)
    {
        printf("given no is prime");
    }
    else
    {
        printf("given no is not prime");
    }

return 0;
}


