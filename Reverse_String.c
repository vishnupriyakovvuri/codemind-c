#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i,l=0,len;
    scanf("%[^
]s",str);
    for(i=0;str[i]!=NULL;i++)
    {
        l++;
    }
    for(i=l-1;i>=0;i--)
    {
        printf("%c",str[i]);
    }
}