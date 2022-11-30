#include <stdio.h>
#include <stdlib.h>

int main()
{

    int ctr=0,i;
    char a[100];
    char *ptr=&a;
    printf("enter the values\n");
    scanf("%s",&a);
    for(i=0;ptr[i]!='\0';i++)
    {
       ctr++;
    }
    printf("%d ",ctr);
    return 0;
}
