#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n>=3&&n<=100)
    {
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("*");        
        }
        printf("
");
    }
    for(int i=n-1;i>0;i--)
    {
        for(int j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("
");
    }
    }
    else
    {
        printf("The pattern is not possible");
    }
}