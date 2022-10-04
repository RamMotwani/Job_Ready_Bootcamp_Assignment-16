#include<stdio.h>
int main()
{
    int i,i,r,c,size,count=0;
    printf("enter how many rows you want in matrix\n");
    scanf("%d",r);
    printf("enter how many columns you want in matrix\n");
    scanf("%d",&c);
    size=r*c;
    int a[r][c];
    printf("enter the values of a matrix\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",a[i][j]);
        }
    }
      for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(a[i][j]==0)
            {
                count++;
            }
        }
    }
    if(count>size/2)
    {
        printf("sparse matrix");
    }
    else
    {
        printf("dance matrix");
    }
    return 0;


}
