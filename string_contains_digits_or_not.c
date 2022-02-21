#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        char str[1000];
        scanf("%s",str);
        int j,c=0,count=0;
        for(j=0;str[j]!=NULL;j++)
        {
            c=c+1;
        }
        for(j=0;j<c;j++)
        {
            if(str[j]>='0' && str[j]<='9')
            {
               count++;
            }
        }
        if(count==0)
        {
            printf("No
");
        }
        else
        {
            printf("Yes
");
        }
        
    }
}