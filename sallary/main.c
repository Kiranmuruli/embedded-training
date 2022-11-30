#include <stdio.h>
#include <stdlib.h>

int main()
{
   int id;
   float salary, hour,ms;
   printf(" enter the id");
   scanf("%d", &id);
   printf(" enter the hour");
   scanf("%f", &hour);
   printf(" enter the salary");
   scanf("%f", &salary);
   ms=salary*hour;
   printf("salary is %.2f", ms);

    return 0;
}
