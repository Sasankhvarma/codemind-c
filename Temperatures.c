#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],i,j,c;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]); 
    }
    for(i=0;i<n;i++)
    {
        c=1;
        for(j=i+1;j<n;j++)
        {
            if(arr[j]>arr[i])
            {
                printf("%d ",j-i);
                c=0;
                break;
            }
        }
        if(c==1)
        {
            printf("%d ",i-i);
        }
    }
}