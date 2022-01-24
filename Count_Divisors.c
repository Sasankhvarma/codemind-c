#include<stdio.h>
int main()
{
	int l,r,k,i,c=0;
	scanf("%d%d%d",&l,&r,&k);
	for(l;l<=r;l++)
	{
		if(l%k==0)
		{
			c=c+1;
		}
	}
	printf("%d",c);
}