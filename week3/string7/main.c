#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a[10];
    printf("enter the string \n");
    scanf("%s",a);

    //for(int i=0;a[i]!='\0';++i)

    printf("length of string %d ",strlen(a));
    return 0;
}
