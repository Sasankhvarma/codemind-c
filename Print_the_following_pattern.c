#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(j==i || j==(n-1)-i)
            {
                printf("%d ",(n-i));
            }
            else
            {
                printf(" ");
            }
        }
        printf("
");
    }
}