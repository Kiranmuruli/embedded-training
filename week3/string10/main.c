#include <stdio.h>
#include <string.h>

int main()
{
    char str[50];
    int i;
    printf("enter the string\n");
    scanf("%s",&str);

    for( i=0; str[i]!='\0'; i++)
    {
        if(str[i]>'A' && str[i]<='Z')
        {
            str[i]=str[i]+32;
        }
    }
    printf("lowercase string is %s",str);
    return 0;
}
