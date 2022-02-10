#include<stdio.h>
int main()
{
    int n,ul;
    scanf("%d",&n);
    int a[n],i,j;
    for( i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        ul=1;
        for( j=a[i];j>0;j--)
        {
          ul=ul*j;  
        }
            printf("%d
",ul);
    }
}