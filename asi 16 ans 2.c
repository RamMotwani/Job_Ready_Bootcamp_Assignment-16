#include<stdio.h>
int main()
{
    int i,j,k,sum;
    int a[3][3];
    int b[3][3];
    int c[3][3];
    printf("enter values of matrix a\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter values of matrix b\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(k=0;k<3;k++)
    {
    for(i=0;i<3;i++)
    {
        sum=0;
        for(j=0;j<3;j++)
        {
            sum=sum+a[i][j]*b[j][k];
        }
        c[i][k]=sum;
    }

    }
    printf("here's the product of two matrices\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d  ",c[i][j]);
        }
    }
    return 0;

}
