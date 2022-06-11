#include<stdio.h>
int main()
{
    char str[100];
    int i,k=0;
    scanf("%[^
]s",str);
    for(i=0;str[i]!=NULL;i++)
    {
        k++;
    }
    k=k-1;
    for(i=0;str[i]!=NULL;i++)
    {
        printf("%c",str[k-i]);
    }
}    