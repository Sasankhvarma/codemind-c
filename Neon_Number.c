#include<stdio.h>
int main()
{ 
    int n,s=0,q,p,rem;
    scanf("%d",&n);
    p=n*n;
    q=p;
    while(q>0)
	{
		rem=q%10;
		s=s+rem;
		q=q/10;
	}
	if(s==n)
	{
		printf("Neon Number");
	}
	else
	{
		printf("Not Neon Number");
	}
}