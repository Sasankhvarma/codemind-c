#include<stdio.h>
int main()
{
    int n,s=1;
    scanf("%d",&n);
    int arr[n],i,s1=0,s2=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int a,b,max=-999;
    scanf("%d%d",&a,&b);
    for(i=0;i<n;i++)
    {
        if(arr[i]<a || arr[i]>b)
            if(arr[i]>max)
            {
                max=arr[i];
            }
    }
    if(max==-999)
        printf("-1");
    else
        printf("%d",max);
}