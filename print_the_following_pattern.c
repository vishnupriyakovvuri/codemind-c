#include<stdio.h>
int main()
{
    int n,i,j,c=65;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            printf("%c ",c);
        }
        c++;
        printf("
");
    }
}