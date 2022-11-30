#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
    int  a[10],i,n;
    float avg=0,sum=0;
    printf("enter the array size elements ");
    scanf("%d",&n);
    printf("enter the array elements ");
    scanf("%d",&a[i]);
    for(i=0;i<=n;i++)
    {
      sum=sum+a[i];
    }
    for(i=1;i<=n;i++)
    {
    avg=sum/n;
    }
    printf("sum is %f\n",sum);

    printf("avg is %f",avg);

    return 0;
}
