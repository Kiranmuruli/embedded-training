#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=10, b=10, inc1,dec1;
    inc1= a++;
    printf("incremented value  %d\n", a);
    dec1= b--;
    printf("decremented value %d\n", b);
    return 0;
}
