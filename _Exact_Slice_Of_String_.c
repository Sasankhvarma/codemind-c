#include<stdio.h>
int main()
{
    char str[100];
    scanf("%[^
]s",str);
    int i,c=0;
    for(i=0;str[i]!=NULL;i++)
    {
        c=c+1;
    }
    int a,b;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        printf("%c",str[i]);
    }
}