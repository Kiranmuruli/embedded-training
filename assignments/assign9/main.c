#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j;

    for(i=1;i<=5;i++)
    {
      for(j=i;j>=1;j--)
      {
          printf("1");
      }
      printf("\n");
    }
    for(i=4; i>=1; i--)
    {
        for(j=i; j>=1; j--)
        {
            printf("1");
        }
        printf("\n");

    }

    return 0;
}
