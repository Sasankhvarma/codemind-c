#include<stdio.h>
int main()
{
    char str[1000];
    scanf("%[^
]s",str);
    int i,vc=0,cc=0,dc=0,sc=0,c=0;
    for(i=0;str[i]!=NULL;i++)
    {
        c=c+1;
    }
    for(i=0;i<c;i++)
    {
        if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
        {
            if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' ||str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U' )
            {
                vc=vc+1;
            }
            else
            {
                cc=cc+1;
            }
        }
        else if(str[i]>='0' && str[i]<='9')
        {
            dc=dc+1;
        }
        else if(str[i]==' ')
        {
            sc=sc+1;
        }
    }
    printf("Vowels: %d
Consonants: %d
Digits: %d
White spaces: %d",vc,cc,dc,sc);
}