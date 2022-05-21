#include<stdio.h>
int main()
{
    int n,arr[100],i,gcd;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    scanf("%d",&arr[i]);
    }
    gcd=arr[0];
    for(i=0;i<n;i++)
    {
        if(arr[i]%gcd==0)
        {
            gcd=gcd;
        }
        else
        {
            gcd=arr[i]%gcd;
            i=i-1;
        }
    }
    printf("%d",gcd);
}