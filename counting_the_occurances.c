#include<stdio.h>
int main()
{
    char str[1000];
    scanf("%[^
]s",str);
    int i,c=0;
    for(i=0;str[i]!=NULL;i++)
    {
        c=c+1;
    }
    char ch;
    scanf("%s",&ch);
    int count=0;
    for(i=0;i<c;i++)
    {
        if(str[i]==ch)
        {
            count=count+1;
        }
    }
    if(count!=0)
    {
        printf("%d",count);
    }
    else
    {
        printf("-1");
    }
}