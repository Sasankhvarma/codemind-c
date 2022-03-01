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
    int rep,c,j,max=0,k,m;
    for(i=0;i<n;i++)
    {
        rep=0;
        c=0;
        for(j=0;j<n;j++)
        {
            if(i!=j)
            {
                if(i>j && arr[i]==arr[j])
                {
                     rep=1;
                     break;
                }   
            }
            if(arr[i]==arr[j])
            {
                c=c+1;
            }
        }
        if(c>max && rep==0)
        {
            max=c;
            k=i;
        }
        if(c==max && rep==0)
        {
            m=i;
        }
    }
    if(arr[k]>arr[m])
    {
        printf("%d",arr[m]);
    }
    else
    {
        printf("%d",arr[k]);
    }
}