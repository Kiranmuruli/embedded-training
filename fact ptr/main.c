#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,a,fact=1;
    printf("enter the the value a\n");
    scanf("%d",&a);
    int *ptr=&a;
    for(i=1;i<=*ptr;i++)
    {
        fact=fact*i;
    }
    printf("fact is %d\n",fact);
    return 0;
}
