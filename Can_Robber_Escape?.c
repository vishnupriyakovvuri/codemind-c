#include<stdio.h>
int main()
{
    int n,a[100],i,f=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]>=n)
        {
            f=1;
            break;
        }
    }
    if(f==0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}