#include<stdio.h>
int main()
{
    int n,a[100],i,c=0,max=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==0)
        {
            if(max<c)
            {
                max=c;
            }
            c=0;
        }
        else
        {
            c++;
        }
    }
    if(c>max)
    {
        max=c;
    }
    printf("%d",max);
}