#include<stdio.h>
#include<math.h>
int main()
{
    int r,c,a[100][100],i,j,d=0,s=0,k;
    scanf("%d%d",&r,&c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(i==j)
            {
                d+=a[i][j];
            }
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(i==j&&j==r-1-i)
            {
                
            }
            else if(j==r-i-1)
            {
                s+=a[i][j];
            }
        }
    }
    k=d+s;
    printf("%d",k);
}