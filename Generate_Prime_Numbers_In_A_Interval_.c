#include<stdio.h>
int main()
{
    int a,b,i,s;
    scanf("%d%d",&a,&b);
    for(a;a<=b;a++)
    {
        s=0;
        for(i=2;i<=a/2;i++)
        {
            if(a%i==0)
            {
                s=1;
                break;
            }
        }
        if(s==0 && a!=1)
        {
            printf("%d
",a);
        }
    }
}