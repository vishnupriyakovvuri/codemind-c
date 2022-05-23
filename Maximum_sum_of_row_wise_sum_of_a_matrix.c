#include<stdio.h>
int main()
{
    int arr[100][100],r,c,i,j,s,max=0;
    scanf("%d%d",&r,&c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        s=0;
        for(j=0;j<c;j++)
        {
            s=s+arr[i][j];
        }
        if(max<s)
        {
            max=s;
        }
    }
    printf("%d",max);
}