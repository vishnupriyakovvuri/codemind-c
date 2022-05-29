#include<stdio.h>
int prime(int n)
{
    int i,c=0;
    if(n<=1)
    {
        c=1;
    }
    else
    {
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            c++;
            break;
        }
    }
    }
    if(c==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int n,i,a[100],c=0,k;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        if(a[i]>=k&&prime(a[i])==1)
        {
            c++;
        }
    }
    printf("%d",c);
}