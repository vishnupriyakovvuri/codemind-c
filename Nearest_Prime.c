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
    int t;
    scanf("%d",&t);
    while(t!=0)
    {
    int n,i,min,max,d,p,r;
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
        if(prime(i)==1)
        {
            min=i;
        }
    }
    d=n-min;
    p=n+p;
    for(i=p;i>n;i--)
    {
        if(prime(i)==1)
        {
            max=i;
        }
    }
    r=abs(max-n);
    if(d<r)
    {
        printf("%d
",min);
    }
    else if(d>r)
    {
        printf("%d
",max);
    }
    else
    {
        printf("%d
",min);
    }
    t--;
}
}