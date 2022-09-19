#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,c=0;
    scanf("%d",&n);
    if(n==1)
    {
        printf("not a prime");
    }
    else
    {
    for(i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            c=1;
            break;
        }
    }
    if(c==0)
    {
        printf("prime");
    }
    else
    {
        printf("not a prime");
    }
    }
}