#include<stdio.h>
int main()
{
    int n,i,a[100],c,b,d=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d%d",&c,&b);
    for(i=0;i<n;i++)
    {
        if(a[i]>=c&&a[i]<=b)
        {
            
        }
        else
        {
            printf("%d ",a[i]);
            d++;
        }
    }
    if(d==0)
    {
        printf("%d",-1);
    }
}