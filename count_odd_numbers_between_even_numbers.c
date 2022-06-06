#include<stdio.h>
int main()
{
    int n,i,k=0,j,a[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        //printf("%d ",a[i]);
    }
    for(i=0;i<n-2;i++)
    {
        j=i+2;
            if(a[i]%2==0&&a[j]%2==0)
            {
                if(a[i+1]%2!=0)
                {
                 k++;
                }
            }
    }
    printf("%d",k);
}