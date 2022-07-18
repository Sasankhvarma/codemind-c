#include<stdio.h>
int main()
{
    int n,s=0;
    scanf("%d",&n);
    int arr[n],i,s1=0,s2=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        s=s+arr[i];
    }
    float k;
    k=(float)s/n;
    printf("%.2f",k);
}