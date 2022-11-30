#include <stdio.h>
#include <stdlib.h>

int main()
{
    float radius,pi;
    int area;
    printf(" enter the pi value");
    scanf("%f",&pi);
    printf("enter the radius");
    scanf("%f",&radius);
    area=pi*radius*radius;
    printf("area of circle is %d", area);

    return 0;
}
