#include<stdio.h>
int main()
{
    int n,i,j,c=0,a[100],k=0,b[100],p=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=0;j<n;j++)
        {
            if(a[i]==a[j])
            {
                c++;
            }
        }
        if(c==1)
        {
            b[k]=a[i];
            k++;
            p++;
        }
    }
    for(k=0;k<p;k++)
    {
        printf("%d",b[k]);
    }
}