#include<stdio.h>
int main()
{
    int n,a[100],i,m,b[100],c=0,k;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&m);
    for(i=0;i<m;i++)
    {
        scanf("%d",&b[i]);
    }
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        if(b[i]>=k&&a[i]<=k)
        {
            c++;
        }
    }
    printf("%d",c);
}