#include<stdio.h>
int main()
{
    int i,j,sum=0;
    int a[3][3];
    printf("enter values of matrix a\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        sum=sum+a[i][2-i];
    }
    printf("sum of left diagonals of a matrix is  %d",sum);
    return 0;
}
