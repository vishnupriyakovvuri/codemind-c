#include<stdio.h>
int main()
{
    int n,i,j,c;
    scanf("%d",&n);
    c=64+n;
    for(i=n;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
               printf("%c ",c);
        }
        c--;
        printf("
");
    }
}