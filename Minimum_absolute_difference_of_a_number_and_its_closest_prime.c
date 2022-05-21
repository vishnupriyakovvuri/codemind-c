#include<stdio.h>
#include<math.h>
int prime(int i)
{
    int j,c=0;
    for(j=2;j<=i/2;j++)
    {
        if(i%j==0)
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
    int n,i,p,min,d,max,k,r,q=0;
    scanf("%d",&n);
    if(prime(n)==1)
    {
        printf("%d",q);
    }
    else
    {
    for (i=2;i<=n;i++)
    {
        if(prime(i)==1)
        {
            min=i;
        }
    }
      d=n-min;
      p=n+d;
    for(i=p;i>n;i--)
    {
        if(prime(i)==1)
        {
            max=i;
        }
        else
        {
            max=max+0;
        }
    }
    k=abs(max-n);
    if(k>d)
    {
        r=min;
    }
    else if(d>k)
    {
     r=max ;
    }
    else
    {
        r=min;
    }
     printf("%d ",abs(n-r));
    } 
}