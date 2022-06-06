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
    a[n]=a[0];
    a[n+1]=a[1];
    for(i=0;i<n;i++)
    {
        j=i+2;
            if(a[i]%2!=0&&a[j]%2==0||a[i]%2==0&&a[j]%2!=0)
            {
                 k++;
            }
    }
    printf("%d",k);
}