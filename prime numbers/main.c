#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,i,ctr=0;
    printf("enter num\n");
    scanf("%d",&a);
    for(i=1; i<=a; i++)
    {
        if(a%i==0)
    {
        ctr++;
    }

        }
        if(ctr==2)
            {
                   printf("no is prime");
            }
            else
                {
            printf("no is not prime");
    }
    return 0;
}

