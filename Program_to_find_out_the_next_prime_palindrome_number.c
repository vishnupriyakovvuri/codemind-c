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
int palin(int n)
{
    int r,rev=0,k;
    k=n;
    while(n>0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    if(rev==k)
    {
        return rev;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int n,i,s;
    scanf("%d",&n);
    i=n+1;
    while(1)
    {
        if(prime(i)==1)
        {
            if(palin(i)>0)
            {
              s=i;
              break;
            }
        }
        i++;
    }
    printf("%d",s);
}