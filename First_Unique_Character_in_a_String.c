#include<stdio.h>
int main()
{
    char str[100];
    scanf("%[^
]s",str);
    int i,j,c=0;
    for(i=0;str[i]!=NULL;i++)
    {
        c=c+1;
    }
    int s,k=1;
    for(i=0;i<c;i++)
    {
        s=1;
        for(j=0;j<c;j++)
        {
            if(i!=j)
            {
                if(str[i]==str[j])
                {
                    s=0;
                    break;
                }
            }
        }
        if(s!=0)
        {
            printf("%d",i);
            k=0;
            break;
        }
    }
    if(k!=0)
    {
        printf("-1");
    }
}