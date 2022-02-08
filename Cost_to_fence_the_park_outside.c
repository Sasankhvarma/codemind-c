#include<stdio.h>
main()
{
    int l,b,w,c,area,cost;
    scanf("%d%d%d%d",&l,&b,&w,&c);
    area=((l+(2*w))*(b+(2*w)))-(l*b);
    cost=area*c;
    printf("%d",cost);
    return 0;
    
}