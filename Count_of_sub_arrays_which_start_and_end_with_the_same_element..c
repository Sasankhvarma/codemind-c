#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int j,c=0,k;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i!=j && arr[i]!=1000)
            {
                if(arr[i]==arr[j])
                {
                    c=c+1;
                    arr[j]=1000;
                }
            }
        }
    }
    printf("%d",c+n);
}