#include<stdio.h>
int main()
{
    long int n,s=0;
    scanf("%ld",&n);
    long int arr[n],i,j;
    for(i=0;i<n;i++)
    {
        scanf("%ld",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        s=s+arr[i];
    }
    printf("%ld",s);
}