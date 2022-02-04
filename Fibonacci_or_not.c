#include<stdio.h>
int main()
{
    int n,a=0,b=1,c,co=0;
    scanf("%d",&n);
    if(n==0||n==1)
    {
        printf("True");
    }
    else
    {
    for(int i=2;i<=n;i++)
    {
        c=a+b;
        a=b;
        b=c;
        if(n==c)
        {
            printf("True");
            co++;
        }
    }
    if(co==0)
    printf("False");
    }

}