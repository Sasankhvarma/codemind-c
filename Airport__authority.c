#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int arr[n],i,k=0,j=0,c;
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int p;
	scanf("%d",&p);
	for(i=0;i<n;i++)
	{
		if(arr[i]>p)
		{
			k=k+2;
		}
		else
		{
			j=j+1;
		}
	}
	c=j+k;
	printf("%d",c);
}