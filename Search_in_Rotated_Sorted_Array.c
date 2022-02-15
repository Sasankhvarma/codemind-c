#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int arr[a],i,t,flag=0,in;
    for (i=0; i<a; i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&t);
    for (i=0; i<a; i++)
    {
        if (arr[i]==t)
        {
            flag=1;
            in=i;
            break;
        }
        else
        {
            flag=0;
        }
    }
    if (flag==1)
    {
        printf("%d",in);
    }
    else
    {
        printf("%d",-1);
    }
    return 0;
}
