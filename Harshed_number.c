#include<stdio.h>
int main()
{
    int n,s=0,q,rem;
    scanf("%d",&n);
    q=n;
    while(q>0)
    {
        rem=q%10;
        s=s+rem;
        q=q/10;
    }
    if(n%s==0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}