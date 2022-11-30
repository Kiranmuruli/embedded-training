#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,fact=1;
    printf("enter the number to find fact\n");
    scanf("%d",&n);

        for (i=1;i<=n;i++)
            {
          fact=fact*i;
            }
    printf("factorial of %d is  %d\n", n,fact);

    return 0;

}


