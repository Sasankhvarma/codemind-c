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
    int s;
    for(i=0;i<c;i++)
    {
        if(str[i]==' ')
        {
            s=s+1;
        }
    }
    printf("%d",s+1);
}