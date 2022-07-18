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
    for(i=0;i<n-2;i++)
    {
        if(arr[i]%2==0 && arr[i+2]%2!=0)
        {
            s++;
        }
        if(arr[i]%2!=0 && arr[i+2]%2==0)
        {
            s++;
        }
    }
    printf("%d",s);
}