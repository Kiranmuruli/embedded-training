#include <stdio.h>
#include <stdlib.h>
struct car
{
    char carname[50];
    char companyname[50];
    int prize
} s1;
int main()
{
    int prize;
    printf("enter the prize\n");
    scanf("%d",&s1);
    printf("entered prize is %d\n");
    struct car s1= {"company is RR\nROLLS ROY IS AVAIABLE"};
    if(prize>10000000<20000000)
    {
        printf(s1.carname,s1.prize);
    }
    else
    {
        printf("no cars available on this prize");
    }
    return 0;
}
