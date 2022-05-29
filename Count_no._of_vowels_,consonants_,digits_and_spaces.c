#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i,l=0,d=0,v=0,c=0,w=0;
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
            d++;
        }
        else if(str[i]==' ')
        {
            w++;
        }
        else if(str[i]>='A'&&str[i]<='z')
        {
            if(str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'||str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
            {
                v++;
            }
            else
            {
                c++;
            }
        }
    }
    printf("Vowels: %d
",v);
    printf("Consonants: %d
",c);
    printf("Digits: %d
",d);
    printf("White spaces: %d",w);
}