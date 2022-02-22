#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n][n],i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int c1=0,c2=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
            {
                c1=c1+arr[i][j];
            }
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(j==(n-i)-1)
            {
                c2=c2+arr[i][j];
            }
        }
    }
    printf("Principal Diagonal:%d
Secondary Diagonal:%d",c1,c2);
}