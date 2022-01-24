#include<stdio.h>
#include<math.h>
int main()
{
	int N,i,k,c=1;
	scanf("%d",&N);
	for(i=1;i<=N;i++)
	{
		if(N%i==0)
		{
			for(k=2;k<=i/2;k++)
			{
				if(i%k==0)
				{
					c=c+1;
					break;
				}
			}
		}
	}
	printf("%d",c);
}