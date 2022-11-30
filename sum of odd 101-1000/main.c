#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,i,sum=0;
    for(i=101;i<=1000;i++)
    {
      if(i%2!=0)
      {
    sum=sum+i;

    }
    }
    printf(" sum is %d\n",sum);
    return 0;
}
