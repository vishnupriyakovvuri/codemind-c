#include<stdio.h>
int main()
{
    int n,m,a[100],i,j,c=0,k;
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]==m)
        {
            c++;
        }
    }
    for(i=0;i<n-1;i++)
    {
        k=a[i];
        for(j=i+1;j<n;j++)
        {
            if(k+a[j]==m)
            {
                c++;
                break;
            }
            else
            {
                k+=a[j];
            }
        }
    }
    printf("%d",c);
}