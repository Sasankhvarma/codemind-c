#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int s1=0,s2=0,diff;
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            s1=s1+arr[i];
        }
        else
        {
            s2=s2+arr[i];
        }
    }
    if(s1>s2)
    {
        diff=s1-s2;
    }
    else
    {
        diff=s2-s1;
    }
    if(diff%4==0)
    {
        printf("X");
    }
    else
    {
        printf("Y");
    }
}