#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        char str[100];
        int j,c=0;
        scanf("%s",str);
        for(j=0;str[j]!=NULL;j++)
        {
            c=c+1;
        }
        int k=1;
        for(j=0;j<c;j++)
        {
            if(str[j]!=str[c-j-1])
            {
                k=0;
                break;
            }
        }
        if(k==0)
        {
            printf("NO
");
        }
        else
        {
           if(c%2==0)
           {
               printf("YES EVEN
");
           }
           else
           {
               printf("YES ODD
");
           }
        }
    }
}