#include<stdio.h>
int main()
{
    char str[1000];
    scanf("%[^
]s",str);
    int i,s=0,c=0;
    for(i=0;str[i]!=NULL;i++)
    {
        c=c+1;
    }
    for(i=0;i<c;i++)
    {
        if(str[i]>='0' && str[i]<='9')
        {
            s=s+(str[i]-48);
        }
    }
    printf("%d",s);
}