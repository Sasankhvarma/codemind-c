#include<stdio.h>
int prime(int num)
{
    int i;
    for (i=2; i*i<=num; i++)
    {
        if (num%i==0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int a;
    scanf("%d",&a);
    int arr[a];
    int diff1=0,diff2=0,i,j,p1,p2;
    for (i=0; i<a; i++)
    {
        scanf("%d",&arr[i]);
    }
    for (i=0; i<a; i++)
    {
        for (j=arr[i]; j<=10000; j++)
        {
            if (prime(j)==1)
            {
                diff1=j-arr[i];
                p1=j;
                break;
            }
        }
        for (j=arr[i]; j>0; j--)
        {
            if (prime(j)==1)
            {
                diff2=arr[i]-j;
                p2=j;
                break;
            }
        }
        if (diff1>diff2)
        {
            printf("%d",p2);
        }
        else if (diff1<diff2)
        {
            printf("%d",p1);
        }
        else
        {
            if (p1>p2)
            {
                printf("%d",p2);
            }
            else
            {
                printf("%d",p1);
            }
        }
        printf("
");
    }
    return 0;
}