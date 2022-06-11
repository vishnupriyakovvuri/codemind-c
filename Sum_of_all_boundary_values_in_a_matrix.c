#include<stdio.h>
#include<math.h>
int main()
{
    int r,c,a[100][100],i,j,k=0;
    scanf("%d%d",&r,&c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for (i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
         {
                if(i==0||i==r-1||j==0||j==c-1)
                {
                    k+=a[i][j];
                }
        }
    }
    printf("%d",k);
}