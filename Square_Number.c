#include<stdio.h>
int main()
{
    int n,i,j,c=0;
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            if(i*j==n)
            {
               c=1;
               break;
            }
        }
    }
    if(c==1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}