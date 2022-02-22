#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],i,j,c=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]!=0)
        {
            printf("%d ",arr[i]);
        }
        else
        {
            c=c+1;
        }
    }
    for(j=0;j<c;j++)
    {
        printf("0 ");
    }
}