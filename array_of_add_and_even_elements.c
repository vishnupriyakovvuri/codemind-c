#include<stdio.h>
int main()
{
    int n,i,a[100],b[100],j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    j=0;
    for(i=0;i<n;i++)
    {
        if(a[i]%2==1)
        {
            b[j++]=a[i];
        }
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            b[j++]=a[i];
        }
    }
    for(j=0;j<n;j++)
    {
        printf("%d ",b[j]);
    }

}