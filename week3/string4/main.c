#include <stdio.h>
#include <string.h>

int main()
{
    char a[20];
    int temp=0,n,i,j;
    printf("enter the string\n");
    scanf("%s",a);
    n=strlen(a)-1;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("the string after sorting %s\n",a);
    return 0;
}
