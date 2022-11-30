#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=10,y=5,*ptr1,*ptr2;
    ptr1=&x;
    ptr2=&y;
    int add=ptr2+x;
    printf("sum is %d\n",add);
    return 0;
}
