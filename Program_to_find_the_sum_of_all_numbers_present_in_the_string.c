#include<stdio.h>
int main()
{
    char str[100];
    int i,s=0;
    scanf("%[^
]s",str);
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]>='0' && str[i]<='9')
        {
            s=s+(str[i]-48);
        }
    }
    printf("%d",s);
}