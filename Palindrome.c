#include<stdio.h>
int rev(int n)
{
    int q,r,s=0;
    q=n;
    while(q!=0)
    {
        r=q%10;
        s=s*10+r;
        q=q/10;
    }
    return s;
}
int main()
{
    int n;
    scanf("%d",&n);
    if(rev(n)==n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}