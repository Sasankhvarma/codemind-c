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
    int k,l1,l2,c1,c2,c=0,j;
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(arr[i]==k)
            {
                c=c+1;
            }
        }
    }
    if(c>=2)
    {
        
        for(i=0;i<n;i++)
        {
            if(arr[i]==k)
            {
                l1=i;
                break;
            }
        }
        for(i=n-1;i>=0;i--)
        {
            if(arr[i]==k && i!=l1)
            {
                l2=i;
                break;
            }
        }
        printf("%d %d",l1,l2);
    }
    else
    {
       printf("-1 -1"); 
    }
}