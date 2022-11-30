#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, n2, sum, sub, div, mul, mod;
    printf("enter the value of n1 and n2\n");
    scanf("%d%d:", &n1,&n2);
    sum = n1+n2;
    sub = n1-n2;
    div = n1/n2;
    mul = n1*n2;
    mod = n1%n2;

     printf("Sum is %d\n",sum);
     printf("Sub is %d\n",sub);
      printf("mul is %d\n",mul);
      printf("div is %d\n",div);
       printf("mod is %d\n",mod);

    return 0;
}
