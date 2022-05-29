#include<stdio.h>
int main()
{
    int n,i,a[100],j,c,b[100],k=0,d=0;
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
             if(a[j]==a[i])
             {
                 c++;
             }
         }
         if(c==1)
         {
             b[k]=a[i];
             k++;
             d=d+1;
         }
    }
    if(k==0)
    {
        printf("%d",-1);
    }
    else
    {
    for(k=0;k<d;k++)
    {
        printf("%d ",b[k]);
    }
    }
}