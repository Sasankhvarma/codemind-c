#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,j,c,k;
    long int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%ld",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
        while(arr[i]>0)
        {
            c++;
            arr[i]=arr[i]/10;
        }
        if(c%2==0)
        {
            k=k+1;
        }
    }
    printf("%d",k);
}