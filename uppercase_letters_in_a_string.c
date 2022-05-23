#include<stdio.h>
#include<string.h>
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
            c=c+1;
        }
    }
    printf("%d",c);
}