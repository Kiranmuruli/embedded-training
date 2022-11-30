#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,a=0,b;
    char str1[10];
    char str2[10];
    char str3[10];
    printf("enter the string\n");
    scanf("%s",str1);
    for(i=0; i<10; i++)
    {
        if((str1[i]=='a')||(str1[i]=='e')||(str1[i]=='i')||(str1[i]=='o')||(str1[i]=='u'))
        {
            str2[a]=str1[i];
            a++;
        }
    }
    printf("vowels are");
    for(i=0; i<10; i++)
    {
        printf(" %c",str2[i]);
    }
    {
      if (str3[b]=str1[i])
        b++;
        }
    printf("consonants are");
    for(j=0; j<10; j++)

    {
        printf("%c",str3[b]);
    }
    return 0;
}
