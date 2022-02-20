#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],i,j;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(arr[i]==arr[j] && i!=j)
            {
                arr[j]=1000;
            }
        }
        if(arr[i]!=1000)
        {
            printf("%d ",arr[i]);
        }
    }
}