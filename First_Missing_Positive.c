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
    int j,k;
    for(j=1;;j++)
    {
        k=1;
        for(i=0;i<n;i++)
        {
            if(arr[i]==j)
            {
                k=0;
            }
        }
        if(k!=0)
        {
            printf("%d",j);
            break;
        }
    }
}