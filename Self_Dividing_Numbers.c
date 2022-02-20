#include<stdio.h>
int self(int n)
{
    int q=n,r,s=0;
    while(q>0)
    {
        r=q%10;
        if(r==0)
        {
            s=0;
            break;
        }
        else
        {
            if(n%r==0)
            {
                s=1;
            }
            else
            {
                s=0;
                break;
            }
        }
        q=q/10;
    }
    if(s==1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    for(a;a<=b;a++)
    {
        if(self(a)==1)
        {
            printf("%d ",a);
        }
    }
}