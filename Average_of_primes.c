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
    int n,i,a[100];
    float s=0,c=0,k;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(prime(a[i])==1)
        {
            s=s+a[i];
            c++;
        }
    }
    k=s/c;
    printf("%.2f",k);
}