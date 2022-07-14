#include<stdio.h>
int main()
{
    int n,fib[1000],i,min,max;
    scanf("%d",&n);
    fib[0]=0;
    fib[1]=1;
    for(i=2;i<n;i++)
    {
        fib[i]=fib[i-1]+fib[i-2];
    }
    for(i=0;i<n;i++)
    {
        if(fib[i]<=n)
        {
            min=fib[i];
        }
        if(fib[i]>n)
        {
            max=fib[i];
            break;
        }
    }
   if(n-min<max-n)
   {
       printf("%d",min);
   }
   else if(n-min>max-n)
   {
       printf("%d",max);
   }
   else
   {
       printf("%d %d",min,max);
   }
}