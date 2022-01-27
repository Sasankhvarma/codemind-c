#include<stdio.h>
int main()
{
    int a,b,i,res,q,rem;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        q=i;
        res=0;
        while(q!=0)
        {
            rem=q%10;
            res=(res*10)+rem;
            q=q/10;
        }
        if(res==i)
        {
            printf("%d ",i);
        }
    }
}