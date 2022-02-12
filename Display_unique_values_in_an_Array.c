#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],i,j,c,k=1;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=0;j<n;j++)
        {
            if(i!=j)
            {
                if(arr[i]==arr[j])
                {
                    c=c+1;
                }
            }
        }
        if(c==0)
        {
            printf("%d ",arr[i]);
            k=0;
        }
    }
    if(k==1)
    {
        printf("-1");
    }
}