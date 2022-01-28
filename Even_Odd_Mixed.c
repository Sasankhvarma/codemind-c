#include<stdio.h>
int main()
{
	int n,q,r,e=1,o=1;
	scanf("%d",&n);
	while(n>9)
	{
		q=n;
		while(q>0)
		{
			r=q%10;
			if(r%2==0)
			{
				e=0;
			}
			else 
			{
				o=0;
			}
			q=q/10;
		}
		if(e==0 && o!=0)
		{
		     printf("Even");
			 break;                     
		}
		else if(e!=0 && o==0)
		{
			printf("Odd");
			break;
		}
		else if(e==0 && o==0)
		{
			printf("Mixed");
			break;
		}
	}
	if(n<10 && n>0)
	{
		if(n%2==0)
		{
			printf("Even");
		}
		else
		{
			printf("Odd");
		}
	}
}