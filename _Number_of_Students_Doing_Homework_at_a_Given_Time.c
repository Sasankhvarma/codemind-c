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
    int n1;
    scanf("%d",&n1);
    int ar[n1],i1;
    for(i1=0;i1<n1;i1++)
    {
        scanf("%d",&ar[i1]);
    }
    int k,c=0;
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        if(k>=arr[i] && k<=ar[i])
        {
            c=c+1;
        }
    }
    printf("%d",c);
}