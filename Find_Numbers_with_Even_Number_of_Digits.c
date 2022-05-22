#include<stdio.h>
#include<math.h>
int main()
{
    int n,a[100],i,d,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        d=int(log10(a[i]))+1;
        //printf("%d--%d, ",a[i],d);
        if(d%2==0)
        {
            c++;
        }
    }
    printf("%d",c);
}