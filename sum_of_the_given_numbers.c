#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int arr[2],j,k;
        for(j=0;j<2;j++)
        {
            scanf("%d",&arr[j]);
        }
            k=arr[0]+arr[1];
            printf("%d
",k);
    }
}