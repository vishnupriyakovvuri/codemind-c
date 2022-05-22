#include<stdio.h>
int main()
{
    int n,m,i,c=0,arr[100];
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]%m!=0)
        {
            c=c+1;
        }
    }
    printf("%d",c);
}