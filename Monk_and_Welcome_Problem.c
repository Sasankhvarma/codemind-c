#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],ar[n],i,j;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]); 
    }
    for(j=0;j<n;j++)
    {
        scanf("%d",&ar[j]);
    }
    for(i=0,j=0;i<n && j<n;i++,j++)
    {
        printf("%d ",arr[i]+ar[j]);
    }
}