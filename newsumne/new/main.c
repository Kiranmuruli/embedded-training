#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
  char ch[20],n,i,temp;
  printf("enter the sting\n");
  scanf("%s",ch);
  n=strlen(ch)-1;

  for(i=0;i<n;i++)
  {
      {
        temp=ch[i];
        ch[i]=ch[n];
        ch[n]=temp;
        n--;
        }


  }
  printf("the rev string %s",ch);

    return 0;


}
