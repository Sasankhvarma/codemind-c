#include<stdio.h>
#include<math.h>
int main()
{
    int a;
    scanf("%d",&a);
    int arr[50],i,r,min;
    int d1,d2,c=0;
    for (i=0; i<50; i++)
    {
        r=pow(2,i);
        arr[i]=r;
    }
    for (i=0; i<50; i++)
    {
        if (a<arr[i])
        {
            d1=arr[i]-a;
            d2=a-arr[i-1];
            if (d1>d2)
            {
                min=d2;
                c=1;
                break;
            }
            else
            {
                min=d1;
                c=1;
                break;
            }
        }
        if (c==1)
        {
            break;
        }
    }
    printf("%d",min);
    return 0;
}
