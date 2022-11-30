#include <stdio.h>
#include <stdlib.h>

int main()
{ int str1,str2,strcmp;
    printf("enter the string str1\n");
    scanf("%s",&str1);
    printf("enter the string str2\n");
    scanf("%s",&str2);

     strcmp=(str1==str2);
    printf("%s",strcmp);

    return 0;
}
