#include <stdio.h>
#include <string.h>

int main()
{
    char a[100],b[100];
    int i,c=0;
    printf("enter 1st string\n");
    scanf("%s",a);
    printf("enter the 2nd string\n");
    scanf("%s",b);
    if(strlen(a)==strlen(b))
    {
        for(i=0; b[i]!=0; i++)
        {
            if(a[i]==b[i])
            {
                c++;
            }

        }
        if(c==i)
            printf("string is same");
        else
            printf("string is not same");
    }
    else
        printf("string is not same");
    return 0;
}
