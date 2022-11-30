#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char name[20],str,i,n;
    printf("enter the string\n");
    scanf("%s",name);
    n=strlen(name);

    for(i=0;i<n;i++)
    {
        if((name[i]=='a') || (name[i]=='e') || (name[i]=='i') || (name[i]=='o') || (name[i]=='u'))
        {
            name[i]=name[i]-32;

        }
        else
        {
            name[i]=name[i];
        }
    }
    printf("%s",name);

    return 0;
}
