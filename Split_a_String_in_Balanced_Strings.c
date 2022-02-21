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
    int c1=0,c2=0,count=0;
    for(i=0;i<c;i++)
    {
        if(str[i]=='R')
        {
            c1=c1+1;
        }
        else if(str[i]='L')
        {
            c2=c2+1;
        }
        if(c1==c2)
        {
            count++;
        }
    }
    printf("%d",count);
}