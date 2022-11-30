#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=30, b=20;
    a=a+b;
    b=a-b;
    printf("%d\n", b);
    a=a-b;
    printf("%d\n", a);
    return 0;
}
