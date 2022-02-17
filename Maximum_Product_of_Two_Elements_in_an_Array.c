#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],i,j,max;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    max=0;
    for(i=0;i<n;i++)
    {
       for(j=0;j<n;j++)
       {
           if(i!=j)
           {
               if((arr[i]-1)*(arr[j]-1)>max)
               {
                   max=((arr[i]-1)*(arr[j]-1));
               }
           }
       }
    }
    printf("%d",max);
}