#include<stdio.h>
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
    int n,i,c=0,arr[100],p;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        p=arr[i];
        if(palin(p)==1)
        {
            c=c+1;
        }
    }
    printf("%d",c);
}