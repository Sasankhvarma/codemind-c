#include<stdio.h>
int main()
{
    int n,r,i,j,k;
    scanf("%d%d",&n,&r);
    for(i=1;i<=r;i++)
    {
        if(i%2==1)
        {
            j=n*i;
            printf("%d x %d = %d
",n,i,j);
        }
    }
}