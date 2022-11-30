#include <stdio.h>
#include <string.h>

int main()
{
    char str1[50],temp;
    int i,n;
    printf("enter the string \n");
    scanf("%s",str1);
    n=strlen(str1)-1;

    for(i=0;i<n;i++)

        {
        temp=str1[i];
        str1[i]=str1[n];
        str1[n]=temp;
        n--;
        }


    printf("the reverse string is %s\n",str1);
    return 0;
}
