#include<stdio.h>
#include<math.h>
int square(int n)
{
    int k;
    k=sqrt(n);
    if(k*k==n)
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
    int n,i,a[100],s=0,p;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        p=a[i];
        if(square(p)==1)
        {
            s=s+p;
        }
    }
    printf("%d",s);
}