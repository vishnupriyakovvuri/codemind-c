#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],c='A';
    int i,l=0,len;
    scanf("%[^
]s",str);
    for(i=0;str[i]!=NULL;i++)
    {
        l++;
    }
    for(i=0;i<l;i++)
    {
        if(int(str[i])>c)
        {
            c=str[i];
        }
    }
    printf("%c",c);
}