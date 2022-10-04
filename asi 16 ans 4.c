#include<stdio.h>
int main()
{
    int sum=0,i,j;
    int a[3][3];
    printf("enter the values of matrix a\n");
     for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
     for(i=0;i<3;i++)
    {
        sum=sum+a[i][i];
    }
    printf("sum of right diagonals of a matrix is  %d",sum);
    return 0;



}
