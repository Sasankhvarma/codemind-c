#include<stdio.h>
int main()
{
    char str[100];
    scanf("%[^
]s",str);
    int c=0,c1=0,c2=0,i;
    for(i=0;str[i]!=NULL;i++)
    {
        c++;
    }
    for(i=0;i<c;i++)
    {
        if(str[i]=='U')
        {
            c1++;
        }
        else if(str[i]=='D')
        {
            c1--;
        }
        else if(str[i]=='R')
        {
            c2++;
        }
        else if(str[i]=='L')
        {
            c2--;
        }
    }
    if(c1==0 && c2==0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}