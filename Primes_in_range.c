#include<stdio.h>
#include<math.h>
int prime(int n)
{
    int i,c=0;
    if(n==1 ||n==0)
    {
        c=1;
    }
    if(n>=2)
    {
        for(i=2;i<=sqrt(n);i++)
        {
            if(n%i==0)
            {
                c=1;
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
    int n,m,i,c=0;
    scanf("%d%d",&n,&m);
    for (i=n;i<=m;i++)
    {
        if(prime(i)==1)
        {
            c++;
        }
    }
    printf("%d",c);
}