#include<stdio.h>
int main()
{
    char str[100];
    int i,c=0;
    scanf("%[^
]s",str);
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]>='A' &&str[i]<='Z')
        {
            continue;
        }
        else if(str[i]>='a'&&str[i]<='z')
        {
            continue;
        }
        else if(str[i]>='0'&&str[i]<='9'||str[i]==' ')
        {
            continue;
        }
        else
        {
            c=c+1;
        }
    }
    printf("%d",c);
}