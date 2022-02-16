#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],i,j,c;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        c=1;
        for(j=1;j<=arr[i];j++)
        {
            if(j*j==arr[i])
            {
                printf("True
");
                c=0;
            }
        }
        if(c==1)
        {
            printf("False
");
        }
    }
}