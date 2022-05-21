#include<stdio.h>
int main()
{
    char str[100];
    int i=0,c=1;
    scanf("%[^
]s",str);
    while(str[i]!=NULL)
    {
        if(str[i]==' ')
        {
            c=c+1;
        }
        i++;
    }
    printf("%d",c);
}