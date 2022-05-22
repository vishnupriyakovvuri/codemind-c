#include<stdio.h>
int main()
{
    int n,i=1,j;
    scanf("%d",&n);
    while(i<=n)
    {
        for(j=1;j<=n-2;j++)
        {
            printf("%d",j);
        }
        for(j=n-3;j>=1;j--)
        {
            printf("%d",j);
        }
        printf("
");
        i++;
    }
}