#include<stdio.h>
int main()
{
    int n,s,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i*i==n)
        {
            printf("True");
            s=0;
        }
    }
    if(s!=0)
    {
        printf("False");
    }
}