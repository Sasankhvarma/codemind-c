#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int i,j,c=0,count=0;
    for(i=1;i<=a;i++)
    {
        c=0;
        for(j=1;j<=a;j++)
        {
            if(i%j==0)
            {
                c=c+1;
            }
        }
        if(c==9)
        {
            count=count+1;
            printf("%d ",i);
        }
    }
    printf("
");
    printf("Total=%d",count);
    return 0;
}