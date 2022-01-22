#include<stdio.h>
#include<math.h>
int main()
{
	int A,B,C;
	float s,area;
	scanf("%d%d%d",&A,&B,&C);
	if(A>=1 && A<=1000 && B>=1 && B<=1000 && C>=1 && C<=1000)
	{
	    s=(A+B+C)/2.00;
	    area=sqrt(s*(s-A)*(s-B)*(s-C));
	    printf("%.2f",area);
	}
}