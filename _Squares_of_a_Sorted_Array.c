#include<stdio.h>
#include<math.h>
int main()
{
    int n,a[100],i,k,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]<0)
        {
            a[i]=abs(a[i]);
        }
    }
        for(i=0;i<n-1;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(a[i]>a[j])
                {
                 k=a[i];
                 a[i]=a[j];
                 a[j]=k;
                }
            }
        }
        for(i=0;i<n;i++)
        {
            a[i]=a[i]*a[i];
        }
        for(i=0;i<n;i++)
        {
            printf("%d ",a[i]);
        }
}