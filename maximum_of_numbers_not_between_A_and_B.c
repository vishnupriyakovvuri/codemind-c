#include<stdio.h>
int main()
{
    int n,i,a[100],b,c,min,max;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d%d",&b,&c);
    max=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    min=-1;
    for(i=0;i<n;i++)
    {
        if(a[i]>=b&&a[i]<=c)
        {
            
        }
        else
        {
            if(a[i]>min)
            {
                min=a[i];
            }
        }
    }
    if(min==max)
    {
        printf("%d",min);
    }
    else
    {
        printf("%d",-1);
    }
}