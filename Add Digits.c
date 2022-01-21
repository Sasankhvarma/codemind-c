#include<stdio.h>
int main()
{
    int num,i,s,r;
    scanf("%d",&num);
    while(num>9)
    {
    	s=0;
        while(num>0)
        {
            r=num%10;
            s=s+r;
            num=num/10;
        }
        num=s;
    }
    printf("%d",s);
}