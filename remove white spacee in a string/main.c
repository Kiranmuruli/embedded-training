#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,a=0;
    char str1[20];
    char str2[20];
    printf("enter the string\n");
    scanf("%[^\n]s",str1);
    for(i=0;i<20;i++)
    {
        if(str1[i]!=' ')
        {
            str2[a]=str1[i];
            a++;
        }
        }
        for(i=0;i<20;i++)
        {
            printf("%c",str2[i]);
        }

    return 0;
}
