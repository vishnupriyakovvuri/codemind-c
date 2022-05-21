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
    int n,r,c=0,pc=0,k;
    scanf("%d",&n);
    k=n;
    if(prime(n)==1)
    {
        while(k>=1)
        {
            r=k%10;
            c++;
            k=k/10;
        }
        while(n>=1)
       {
         r=n%10;
         if(r!=1)
         {
         if(prime(r)==1)
         {
             pc++;
         }
         }
         n=n/10;
    }
     if(c==pc)
     {
         printf("Mega Prime");
     }
     else
     {
         printf("Not Mega Prime");
     }
    }
    else
    {
        printf("Not Mega Prime");
    }
}