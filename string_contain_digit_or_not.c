#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i,l=0,len,c=0;
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
            c++;
        }
    }
    if(c>0)
    {
        printf("Contains %d digit",c);
    }
    else
    {
        printf("Doesn't contain digit");
    }
}