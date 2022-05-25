#include<stdio.h>
int prime(int n)
{
    int i,c=0;
    for(i=2;i<=n/2;i++)
    {
        if(n%2==0)
        {
            c++;
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
    int n,i,j,k=0,l=0;
    scanf("%d",&n);
    for(i=2;i<=n/2;i++)
    {
        if(prime(i)==1)
        {
            for(j=i;j<=n/2;j++)
            {
                if(prime(j)==1)
                {
                    if(i*j==n)
                    {
                        k=i;
                        l=j;
                        break;
                    }
                }
            }
        }
    }
    if(k>0&&l>0)
    {
        printf("%d %d",k,l);
    }
    else
    {
        printf("%d",-1);
    }
}