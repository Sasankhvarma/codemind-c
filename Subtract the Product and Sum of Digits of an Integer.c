#include<stdio.h>
int main()
{
	int n,s,r,k,t;
	scanf("%d",&n);
	while(n>9)
	{
		s=0;
		k=1;
	    while(n>0)
	      {
		    r=n%10;
		    s=s+r;
		    k=k*r;
		    n=n/10;
	      }
     	if(s>=k)
	     {
	       t=s-k;  
	     }
	    else
	     {
	       t=k-s;
	     }
	}
	printf("%d",t);
}