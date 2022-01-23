#include<stdio.h>
int main()
{
	int n,s,i,r;
	scanf("%d",&n);
	for(i=1;i<=n/2;i++)
	{
		s=1;
		r=i*i;
		if(r==n)
		{
			printf("True");
			s=0;
            break; 
		}
	}
	if(s==1)
	{
		printf("False");
	}
}