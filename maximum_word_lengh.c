#include<stdio.h>
int main()
{
    char a[100];
    int i,max,c=0;
    scanf("%[^
]s",a);
    max=0;
    for(i=0;a[i]!=NULL;i++)
    {
        if(a[i]!=' ')
        {
            c++;
            if(c>max)
            {
                max=c;
            }
        }
        else
        {
            c=1;
            i++;
        }
    }
    printf("%d",max);
}