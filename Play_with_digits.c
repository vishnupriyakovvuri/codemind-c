#include<stdio.h>
int main()
{
    int n,arr[100],i,s=0,k,r;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        k=arr[i];
        while(k>0)
        {
            r=k%10;
            s=s+r;
            k=k/10;
        }
    }
    printf("%d",s);
}