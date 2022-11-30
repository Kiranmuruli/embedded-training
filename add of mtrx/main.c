#include <stdio.h>
#include <stdlib.h>

int main()
{
    int  r,c,i,j,a[10][10],b[10][10],sum[10][10];
    printf("enter the no of r\n");
    scanf("%d",&r);
    printf("enter the no of c\n");
    scanf("%d",&c);

    printf("enter the matrix 1\n");
    for(i=0;i<r;i++)
        for(j=0;j<c;j++){
        printf("enter the elements of a%d %d %d\n", i+1,j+1);
        scanf("%d",&a[i][j]);

         printf("enter the matrix 2\n");
        for(i=0;i<r;i++)
        for(j=0;j<c;j++){
        printf("enter the elements of b%d %d %d\n", i+1,j+1);
        scanf("%d",&b[i][j]);}

        for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            sum[i][j]=a[i][j]+b[i][j];
        printf("sum of matrix is\n");
         for(i=0;i<r;i++)
        for(j=0;j<c;j++)

            printf("%d", sum[i][j]);

        if(j++c-1)
        {
            printf("\n\n");
        }




    return 0;
}
