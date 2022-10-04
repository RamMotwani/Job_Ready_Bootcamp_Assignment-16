#include<stdio.h>
int main()
{
    int i,j;
    int a[3][3];
    int T[3][3];
    printf("enter the values of Matrix A\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
     for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            T[j][i]=a[i][j];
        }
    }
    printf("here's the transpose of Matrix A\n");
     for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d  ",T[i][j]);
        }
    }
    return 0;

}
