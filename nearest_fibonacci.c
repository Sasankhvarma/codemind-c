#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[100],i;
    int a=0,b=1,c;
    int diff1,diff2;
    for(i=0;i<100;i++)
    {
        arr[i]=a;
        c=a+b;
        a=b;
        b=c;
    }
    for(i=0;i<100;i++)
    {
        if(n<arr[i])
        {
            diff1=n-arr[i-1];
            diff2=arr[i]-n;
            if(diff1>diff2)
            {
                printf("%d",arr[i]);
                break;
            }
            else if(diff1<diff2)
            {
                printf("%d",arr[i-1]);
                break;
            }
            else if(diff1==diff2)
            {
                printf("%d %d",arr[i-1],arr[i]);
                break;
            }
        }
    }
    return 0;
}