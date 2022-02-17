#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,arr[100],c=0;
    for(i=0;i<100 && n!=0;i++)
    {
        arr[i]=n%10;
        n=n/10;
        c=c+1;
    }
    for(i=c-1;i>=0;i--)
    {
        if(arr[i]%2!=0)
        {
            printf("%d",arr[i]*arr[i]);
        }
    }
}