#include <stdio.h>
#include <string.h>

int main()
{
    char str1[20],str2[20],i,j;
    printf("enter the first string\n");
    scanf("%s",str1);
    printf("enter the second string\n");
    scanf("%s",str2);
    j=strlen(str1);
    for(i=0;str2[i]!='\0';i++)
    {
            str1[i+j]=str2[i];
    }
    str1[i]='\0';
    printf("%s%s",str1,str2);
    return 0;
}
