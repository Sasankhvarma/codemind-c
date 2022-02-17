#include<stdio.h>
int main()
{
    char str[100];
    int i,c=0;
    scanf("%[^
]s",str);
    for(i=0;str[i]!=NULL;i++)
    {
        c=c+1;
    }
    for(i=c-1;i>=0;i--)
    {
        printf("%c",str[i]);
    }
}