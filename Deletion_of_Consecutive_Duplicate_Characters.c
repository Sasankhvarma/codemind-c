#include<stdio.h>
int main()
{
    int n,a;
    scanf("%d",&n);
    for(a=0;a<n;a++)
    {
        char str[100];
        scanf("%s",str);
        int i,c=0;
        for(i=0;str[i]!=NULL;i++)
        {
            c=c+1;
        }
        int count=0;
        for(i=0;i<c-1;i++)
        {
            if(str[i]==str[i+1])
            {
                count++;
            }
        }
        printf("%d
",count);   
        }
}