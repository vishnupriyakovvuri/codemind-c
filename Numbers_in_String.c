#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i,l=0,len,c=0,p;
    scanf("%[^
]s",str);
    for(i=0;str[i]!=NULL;i++)
    {
        l++;
    }
    for(i=0;i<l;i++)
    {
        if(str[i]>='0'&&str[i]<='9')
        {
            c=c+int(str[i])-48;
        }
    }
    printf("%d",c);
}