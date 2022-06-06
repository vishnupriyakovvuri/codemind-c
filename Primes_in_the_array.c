#include<stdio.h>
#include<math.h>
int prime(int n)
{
    int i,c=0;
    if(n<=1)
    {
        return 0;
    }
    else
    {
    for(i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            c++;
            break;
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
}
int main()
{
    int n,a[100],i,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(prime(a[i])==1)
        {
            //printf("%d ",a[i]);
            c++;
        }
    }
    printf("%d",c);
}