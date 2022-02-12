#include<stdio.h>
int main()
{
    int k,m;
    scanf("%d",&k);
    for(m=1;m<=k;m++)
    {
        int n;
        scanf("%d",&n);
        int arr[n],i,j,s=0,s1=0;
        for(i=0;i<n-1;i++)
        {
            scanf("%d",&arr[i]);
        }
        for(i=0;i<n-1;i++)
        {
           s=s+arr[i];
        }
        for(j=1;j<=n;j++)
        {
            s1=s1+j;
        }
        printf("%d
",s1-s);
    }
}