#include<stdio.h>
int main()
{
	int n,i,j;
	scanf("%d",&n);
	for(j=n;j>0;j--)
	{
		for(i=1;i<=j;i++)
		{
			printf("%d",i);
		}
		printf("
");
	}
}