#include<stdio.h>
int main()
{
    int i,j,k,a;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        for(j=a;j>i;j--)
    {
        printf(" ");
    }
    for(k=1;k<=2*i-1;k++)
    {
        printf("%d",i);
    }
    printf("
");
    }
}