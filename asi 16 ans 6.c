#include<stdio.h>
int main()
{
    int i,j,k=1,r,c;
    int a[3][3];
    printf("enter values of matrix to find the sum of rows and columns\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
      for(i=0;i<3;i++)
    {

        r=0;
        c=0;
        for(j=0;j<3;j++)
        {
            r=r+a[i][j];
            c=c+a[j][i];
        }
        printf("sum of row & column %d is  %d & %d\n",k,r,c);
        k++;
    }
    return 0;
}
