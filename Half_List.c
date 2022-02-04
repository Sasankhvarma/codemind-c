#include<stdio.h>
int main()
{
    int n,b;
    scanf("%d",&n);
    int a[n],i,j;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    b=n/2;
    for(i=n-1;i>=b;i--)
    {
        printf("%d ",a[i]);
    }
    for(i=0;i<b;i++)
    {
        printf("%d ",a[i]);
    }
}