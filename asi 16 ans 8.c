#include<stdio.h>
int main()
{
    int i,j;
    int a[3][3];
    printf("enter values of matrix to display an upper triangular matrix\n");
     for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0+i;j<3;j++)
        {
            printf("%d",a[i][j]);
        }
    }
    return 0;
}
