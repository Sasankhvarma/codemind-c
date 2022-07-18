#include<stdio.h>
#include<math.h>
int main()
{
    int n,s=0,j=0;
    scanf("%d",&n);
    int arr[n],i,s1=0,s2=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=n-1;i>=0;i--)
    {     
        if(arr[i]==1)
             s=s+pow(2,j);
        j++;
    }
    printf("%d",s);
}