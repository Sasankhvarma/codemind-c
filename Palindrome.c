#include<stdio.h>
int main()
{
    int n,r,p,s=0;
    scanf("%d",&n);
    p=n;
    while(p!=0)
    {
        r=p%10;
        s=(s*10)+r;
        p=p/10;
    }
    if(s==n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}