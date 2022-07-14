#include<stdio.h>
int main()
{
    int n,a[100],i,k,j,max=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
    
        if(a[i]+k>=max)
        {
            printf("True ");
        }
        else
        {
            printf("False ");
        }
    }
}