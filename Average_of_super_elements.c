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
    float s=0;
    int count=0;
    for(i=0;i<n;i++)
    {
        int rep=0,c=0;
        for(j=0;j<n;j++)
        {
            if(i<j && arr[i]==arr[j])
            {
                rep=1;
                break;
            }
            if(arr[i]==arr[j])
            {
                c=c+1;
            }
        }
        if(c==arr[i] && rep==0)
        {
            s=s+arr[i];
            count++;
        }
    }
    if(count==0)
    {
        printf("-1");
    }
    else
    {
        printf("%.2f",s/count);
    }
}