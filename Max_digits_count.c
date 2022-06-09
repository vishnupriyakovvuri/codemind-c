#include<stdio.h>
int digit(int n)
{
    int s=0;
    while(n>0)
    {
        s++;
        n=n/10;
    }
    return s;
}
int main()
{
    int n,i,a[100],b[100],min,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        //printf("%d ",a[i]);
        b[i]=digit(a[i]);
    }
    min=b[0];
    for(i=0;i<n;i++)
    {
        if(b[i]>min)
        {
            min=b[i];
        }
    }
    for(i=0;i<n;i++)
    {
        if(b[i]==min)
        {
            c++;
        }
    }
    printf("%d",c);
}