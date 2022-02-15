#include<stdio.h>
int reverse(int a)
{
    int rev=0,r;
    while(a!=0)
    {
        r=a%10;
        rev=(rev*10)+r;
        a=a/10;
    }
    return rev;
}
int main()
{
int n,j,sum=0;
scanf("%d",&n);
while(j>0)
{
     sum=n+reverse(n);
     if(sum==reverse(sum))
     {
         printf("%d",sum);
         break;
     }
     else
     {
         n=sum;
         continue;
     }
}
}
