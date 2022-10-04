#include<stdio.h>
int main()
{
    int i,j,sum=0,max=0,index;
    int a[3][3];
    printf("enter values of a matrix\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {     sum=0;
      for(j=0;j<=2;j++)
      {
          if(a[i][j]==1)
          {
              sum++;
          }
      }
       if(max<sum)
          {
              max=sum;
              index=i;
          }
    }
    printf("row %d has max 1 i.e %d ",index+1,max);

    return 0;
}
