#include<stdio.h>
int main()
{
    int r,c,a[100][100],i,j,es=0;
    scanf("%d%d",&r,&c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for (i=0;i<r;i+=1)
    {
        for(j=0;j<c;j++)
        {
            es+=a[i][j];
        }
    }
    printf("%d",es);
}