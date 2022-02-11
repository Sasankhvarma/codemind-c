#include<stdio.h>
int main()
{
    int n,s;
    scanf("%d",&n);
    for(s=0;s<n;s++)
    {
        int a,b,c=0;
        scanf("%d%d",&a,&b);
        for(a;a<=b;a++)
        {
            if(a%10==2 || a%10==3 || a%10==9)
            {
                c=c+1;
            }
        }
        printf("%d
",c);
    }
}