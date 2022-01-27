#include<stdio.h>
int main()
{
    int n,i,res=0,q,rem;
    scanf("%d",&n);
    q=n;
    while(q>0)
    {
        rem=q%10;
        res=(res*10)+rem;
        q=q/10;
    }
    printf("%d",res);
}