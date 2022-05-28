#include<stdio.h>
int main()
{
    int n,a[100][100],i,j,p=0,s=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            //printf("%d.%d-%d,",i,j,a[i][j]);
            if(i==j)
            {
                p+=a[i][j];
            }
             if(j+i==n-1)
            {
                s+=a[i][j];
               // printf("%d ",a[i][j]);
            }
        }
    }
    printf("Principal Diagonal:%d
",p);
     printf("Secondary Diagonal:%d",s);
}