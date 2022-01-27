#include<stdio.h>
int main()
{
    int n,r,i,j,f,s=0;
    scanf("%d",&n);
    j=n;
    while(j>0)
    {
    	r=j%10;
    	f=1;
    	for(r;r>0;r--)
    	{
    		f=f*r;
		}
		s=s+f;
		j=j/10;
	}
	if(s==n)
	{
		printf("The number %d is a strong number",n);
	}
	else
	{
		printf("The number %d is not a strong number",n);
	}
}