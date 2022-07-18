#include<stdio.h>
#include<math.h>
int size(long long int num)
{
    int c=0;
    while(num>0)
    {
        c++;
        num/=10;
    }
    return c;
}
int main()
{
    long long int a;
    scanf("%lld",&a);
    int c=size(a);
    long long int asq=a*a;
    int x=pow(10,c);
    long long int asqmod=asq%x;
    if(asqmod==a)
    {
        printf("Automorphic Number");
    }
    else
    {
        printf("Not an Automorphic Number");
    }
}