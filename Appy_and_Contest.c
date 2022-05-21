#include<stdio.h>
int lcm(int a,int b)
{
    int c,m,l;
    if(a>b)
    {
        c=a;
        a=b;
        b=c;
    }
    m=b;
    while(1)
    {
        if(m%a==0&&m%b==0)
        {
            l=m;
            break;
        }
        m++;
    }
    return l;
}
int main()
{
    int r;
    scanf("%d",&r);
    while(r!=0)
    {
    int t,n,m,k,a,b,c,d;
    scanf("%d",&t);
    scanf("%d%d",&n,&m);
    scanf("%d",&k);
    a=t/n;
    b=t/m;
    c=t/lcm(n,m);
    d=a+b-c;
    if(d>=k)
    {
        printf("Win
");
    }
    else
    {
        printf("Lose
");
    }
    r--;
    }
}