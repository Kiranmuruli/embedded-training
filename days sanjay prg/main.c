#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,k,day=37,dt=1;
    printf("enter first day start mon-1,tue-2,wed-3,thus-4,fri-5,sat-6,sun-7:");
    scanf("%d",&k);
    printf("\n mon \tTue\t Wed\t thus\t fri\t sat\t sun\n\n ");
    for(j=k;j>0;j--)
    {
        printf("\t");
    }
    while(dt<=day)
    {
        if(k%7==0)
           printf("\n");
    }
    printf("%d\t",dt);
    dt++;
    k++;
    return 0;
}
