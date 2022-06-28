#include<stdio.h>
int main()
{
    int n,i,fib[1000],c=0;
    scanf("%d",&n);
    fib[0]=0;
    fib[1]=1;
    for(i=2;i<=n;i++)
    {
        fib[i]=fib[i-1]+fib[i-2];
    }
    for(i=0;i<=n/2;i++)
    {
        if(n==fib[i])
        {
            c=1;
            break;
        }
    }
    if(c==1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}