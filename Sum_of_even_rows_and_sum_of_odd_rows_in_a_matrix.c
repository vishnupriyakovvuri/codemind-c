#include<stdio.h>
int main()
{
    int r,c,a[100][100],i,j,es=0,os=0;
    scanf("%d%d",&r,&c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for (i=0;i<r;i+=2)
    {
        for(j=0;j<c;j++)
        {
            es+=a[i][j];
        }
    }
    for (i=1;i<r;i+=2)
    {
        for(j=0;j<c;j++)
        {
            os+=a[i][j];
        }
    }
    printf("%d %d",es,os);
}