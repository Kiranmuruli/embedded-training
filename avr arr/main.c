#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[5],i,n=5;
    float sum=0,avg=0;
    printf("enter elements \n");

    for(i=1;i<=n;i++)
    {
       scanf("%d",&arr[i]);
    }
    for(i=1;i<=n;i++)
    sum=sum+arr[i];
    avg=sum/n;
    printf("sum is %f\n",sum);
    printf("avg is %f\n",avg);
    return 0;
}
