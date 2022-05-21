#include<stdio.h>
int main()
{
    int n,r,arr[100],i=0,c=0,p=0,j;
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        arr[i]=r;
        n=n/10;
        c++;
        i++;
    }
    for(i=0;i<c;i++)
    {
        for(j=i+1;j<c;j++)
        {
            if(arr[i]==arr[j])
            {
                p++;
            }
        }
    }
    if(p==0)
    {
        printf("Unique Number");
    }
    else
    {
        printf("Not Unique Number");
    }
}