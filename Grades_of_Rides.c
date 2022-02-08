#include<stdio.h>
int main()
{
    int huri,spin,speed;
    scanf("%d%d%d",&huri,&spin,&speed);
    if(huri>50&&spin>60&&speed>100)
    {
        printf("10");
    }
    else if(huri>50&&spin>60&&speed<=100)
    {
        printf("9");
    }
    else if(huri<=50&&spin>60&&speed>100)
    {
        printf("8");
    }
    else if(huri>50&&spin<=60&&speed>100)
    {
        printf("7");
    }
    else if(huri>50||spin>60||speed>100)
    {
        printf("6");
    }
    else
    {
        printf("5");
    }
    
}