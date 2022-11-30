#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str1[20],str2[20];
    int i,n;
    printf("enter the string\n");
    scanf("%s",&str1);

    for(i=0;i<n;i++)
    {
        scanf("%s",str1[i]);
        if(str1[i]!='\0')
        {
           str2[i]=str1[i];
        }
    }
    printf("%s\n",str2);
    return 0;
}
