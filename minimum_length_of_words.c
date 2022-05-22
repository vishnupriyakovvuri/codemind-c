#include<stdio.h>
int main()
{
    char str[100];
    int i,c=0;
    scanf("%[^
]s",str);
    for(i=0;str[i]!=0;i++)
    {
        if(str[i]==' ')
        {
            break;
        }
       c=c+1;
    }
    printf("%d",c);
}