#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,k,p,q;
    scanf("%d",&n);
    for(i=n/2;i>=0;i--)
    {
        if(n>pow(2,i))
        {
            k=pow(2,i);
            p=i+1;
            break;
        }
    }
    q=pow(2,p);
    if(n-k>q-n)
    {
        printf("%d",q-n);
    }
    else
    {
        printf("%d",n-k);
    }
}