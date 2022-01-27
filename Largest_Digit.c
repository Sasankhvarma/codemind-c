#include<stdio.h>
int main()
{
    int n,i,q,rem,max=0;
    scanf("%d",&n);
    q=n;
    while(q>0)
    {
        rem=q%10;
        if(rem>max)
        {
            max=rem;
        }
        q=q/10;
    }
    printf("%d",max);
}