#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a,b,tmp,*ptr1,*ptr2;
   printf("enter values a and b\n");
   scanf("%d%d",&a,&b);
   printf("before swapping is%d\n",);
    *ptr1=&a;
    *ptr2=&b;
   ptr1=*ptr1;
   ptr2=*ptr2;
    printf("ptr1 is %d\n",&a);
    printf("ptr2 is %d\n",&b);
    return 0;
}

