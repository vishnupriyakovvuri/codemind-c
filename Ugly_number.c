#include<stdio.h>
 int ugly(int n)
{
    if(n==1)
    {
        return 1;
    }
    else if(n%2==0)
    {
        return ugly(n/2);
    }
    else if(n%3==0)
    {
        return ugly(n/3);
    }
    else if(n%5==0)
    {
        return ugly(n/5);
    }
    else
    {
        return 0;
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    if(ugly(n))
    {
        printf("Ugly Number");
    }
    else
    {
        printf("Not Ugly Number");
    }
}