#include<stdio.h>
int main()
{
    int n,s=1;
    scanf("%d",&n);
    int arr[n],i,s1=0,s2=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        s+=arr[i];
    }
    int t=s/n;
    for(i=0;i<n;i++)
    {
        if(arr[i]>=t){
            s1++;}
    }
    printf("%d",s1);
}