#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d,a1,b1;
    printf("enter the values\n");
    scanf("%d%d",&a1,&b1);
    a=a1*b1;
    b=a1+b1;
    c=a1-b1;
    d=a1%b1;
    printf("%d\n%d\n%d\n%d\n",a,b,c,d);
    return 0;
}
