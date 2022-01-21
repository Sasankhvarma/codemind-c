#include<stdio.h>
int main()
{
    int arr[2],i,r,k,s,r1,l,n,m;
    for(i=0;i<=1;i++)
    {
        scanf("%d",&arr[i]);
    }
    r=arr[0]+arr[1];
    l=r+1;
    for(l;;l++)
    {
        s=0;
        for(k=2;k<=l/2;k++)
        {
            if(l%k==0)
            {
                s=1;
                break;
            }
        }
        if(s==0 && r!=1)
        {
            n=l;
            break;
        }
    }
    r1=arr[0]+arr[1];
    m=n-r1;
    printf("%d",m);
}