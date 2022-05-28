#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    if(n<3)
    {
        printf("The pattern is not possible");
    }
    else
    {
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("
");
    }
    for(i=1;i<n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            printf("*");
        }
        printf("
");
    }
    }
}