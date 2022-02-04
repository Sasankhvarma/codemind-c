#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int ar[a][b],i,j,s=0;
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            scanf("%d",&ar[i][j]);
        }
    }
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            s=s+ar[i][j];
        }
    }
    printf("%d",s);
}