#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y;
    int *ptr1=&x;
    int *ptr2=&y;
    printf("enter the value of x and y\n");
    scanf("%d%d",&x,&y);
    if(*ptr1>*ptr2)
    {
        printf("content of ptr1 is max %d\n",*ptr1);
    }
    else
    {
        printf("content of  ptr2 is max\n");
    }
    return 0;
}
