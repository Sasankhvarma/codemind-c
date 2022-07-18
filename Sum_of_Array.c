#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],i,s1=0,s2=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
            s1=s1+arr[i];
    }
    
        printf("%d",s1);
}