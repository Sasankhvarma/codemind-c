#include<stdio.h>
#include<math.h>
int dig(int n)
{
    int q,r,c=0;
    q=n;
    while(q!=0)
    {
        c++;
        q/=10;
    }
    return c;
}
int main()
{
    int n,c,s=0,q,r;
    scanf("%d",&n);
    c=dig(n);
    q=n;
    while(q!=0)
    {
       r=q%10;
       s=s+pow(r,c);
       c--;
       q=q/10;
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