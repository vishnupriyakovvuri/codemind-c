#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i,l=0,len,p;
    scanf("%[^
]s",str);
    for(i=0;str[i]!=NULL;i++)
    {
        l++;
    }
    for(i=0;i<l;i++)
    {
        if(str[i]>='A'&&str[i]<='Z')
        {
            p=int(str[i])+32;
            str[i]=char(p);
        }
    }
        printf("%s",str);
}