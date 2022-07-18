#include<stdio.h>
int fac(int n)
{
    int s=0,i;
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            s=s+i;
        }
    }
    return s;
}
int main()
{
    int n;
    scanf("%d",&n);
    if(fac(n)>n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}