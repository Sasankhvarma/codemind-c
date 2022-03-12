#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],i,c=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]>=n)
        {
            c=1;
            break;
        }
    }
    if(c==1)
    {
        printf("NO");
    }
    else
    {
        printf("YES");
    }
}