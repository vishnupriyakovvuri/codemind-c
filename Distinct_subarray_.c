#include<stdio.h>
int main()
{
    int a,b,i,c=0,j;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        if(i%2!=0)
        {
            c++;
        }
    }
    for(i=a;i<=b;i++)
    {
        for(j=i+1;j<=b;j++)
        {
                if((i+j)%2!=0)
                {
                    c++;
                }
        }
    }
    printf("%d",c);
}