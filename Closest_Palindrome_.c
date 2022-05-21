#include<stdio.h>
#include<math.h>
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
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int n,min,d,p,max,r,i;
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        if(palin(i)==1)
        {
            min=i;
        }
    }
    d=n-min;
    p=n+d;
    for(i=p;i>n;i--)
    {
        if(palin(i)==1)
        {
            max=i;
        }
    }
    r=abs(max-n);
    if(r>d)
    {
        printf("%d",min);
    }
    else if(d>r)
    {
        printf("%d",max);
    }
    else
    {
        printf("%d %d",min,max);
    }
}