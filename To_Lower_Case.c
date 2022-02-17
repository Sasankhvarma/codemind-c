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
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]<97)
        {
            str[i]=str[i]+32;
        }
    }
    printf("%s",str);
}