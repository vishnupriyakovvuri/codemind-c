#include<stdio.h>
int main()
{
    int n,arr[100],i,s,k,r;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        s=0;
        scanf("%d",&arr[i]);
        //printf("%d ",arr[i]);
        k=arr[i];
        if(k==0)
        {
            s=s+1;
        }
        while(k!=0)
        {
            s=s+1;
            k=k/10;
        }
        printf("%d ",s);
    }
}