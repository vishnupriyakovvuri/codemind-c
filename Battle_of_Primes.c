#include<stdio.h>
int prime(int n)
{
    int i,c=0;
    for(i=2;i<=n/2;i++)
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
int main()
{
    int n,m,c,i=1,a;
    scanf("%d%d",&n,&m);
    c=n+m;
    while(1)
    {
        a=c+i;
        if(prime(a)==1)
        {
            printf("%d",i);
            break;
        }
        i++;
    }
}