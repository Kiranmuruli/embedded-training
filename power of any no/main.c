#include <stdio.h>
#include <stdlib.h>

int main()
{
    int  base,exp,c;

    printf("enter the numbers 'base' and 'exp'\n");
    scanf("%d%d",&base,&exp);

    c=pow(base,exp);
    {
    printf("power of this no is %d",c);
    }
    return 0;
}
