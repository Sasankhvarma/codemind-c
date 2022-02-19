#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i,arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int a,b;
	scanf("%d%d",&a,&b);
	int count=0,min=1000;
	for(i=0;i<n;i++)
	{
		if(arr[i]<a || arr[i]>b)
		{
			if(arr[i]<min)
			{
				min=arr[i];
			}
			count++;
		}
	}
	if(count==0)
	{
		printf("-1");
	}
	else
	{
		printf("%d",min);
	}
}