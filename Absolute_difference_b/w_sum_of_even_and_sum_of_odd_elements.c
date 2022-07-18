#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],i,s1=0,s2=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]%2==0)
            s1=s1+arr[i];
        else
            s2=s2+arr[i];
    }
    if(s1>s2)
        printf("%d",s1-s2);
    else
        printf("%d",s2-s1); 
}