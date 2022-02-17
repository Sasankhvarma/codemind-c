#include<stdio.h>
int main()
{
    char str[100];
    scanf("%[^
]s",str);
    int i,c=0,max;
    for(i=0;str[i]!=NULL;i++)
    {
        c=c+1;
    }
    max=0;
    for(i=0;i<c;i++)
    {
        if(str[i]>max)
        {
            max=str[i];
        }
    }
    printf("%c",max);
}