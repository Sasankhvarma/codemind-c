#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],i,j=0,s=0,k,c=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        s=(s*10)+arr[i];
    }
    k=s+1;
    while(k>0)
    {
       arr[j]=k%10;
        k=k/10;
        j++;
        c++;
    }
    for(j=c-1;j>=0;j--)
    {
        printf("%d ",arr[j]);
    }
}