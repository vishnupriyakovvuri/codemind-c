#include<stdio.h>
int prime(int n)
{
    int i,c=0;
    for (i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            c++;
            break;
        }
    }
    if(c>0)
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
    int n,i,c=1;
    scanf("%d",&n);
    if(n==1)
    {
        printf("%d",1);
    }
    else
    {
        for(i=2;i<=n;i++)
        {
            if(prime(i)==1)
            {
                if(n%i==0)
                {
                    c++;;
                }
            }
        }
    }
    printf("%d",c);
}