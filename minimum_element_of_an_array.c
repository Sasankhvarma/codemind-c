#include<stdio.h>
int main()
{
    int n,s=0;
    scanf("%d",&n);
    int arr[n],i,s1=0,s2=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int k=arr[0];
    for(i=0;i<n;i++)
    {
        if(arr[i]<k)
        {
            k=arr[i];
        }
    }
    printf("%d",k);
}