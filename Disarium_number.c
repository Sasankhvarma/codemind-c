#include<stdio.h>
#include<math.h>
int main()
{
    int n,sq,c=0,sum=0,temp,r,rev=0;
    scanf("%d",&n);
    temp=n;
    while(temp>0)
    {
        r=temp%10;
        rev=(rev*10)+r;
        temp=temp/10;
    }
    for(int i=1;rev>0;i++)
    {
        r=rev%10;
        sq=pow(r,i);
        sum = sum+sq;
        rev=rev/10;
    }
    if(sum==n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}