#include<stdio.h>
#include<math.h>
int happy(int x)
{
                int sum=0,r,res;
                while (1>0)
                {
                   sum=0;
                    while (x>0)
                    {
                                                r=x%10;
                                                sum+=pow(r,2);
                                                x=x/10;
                                }
                                if (sum>9)
                                {
                                                x=sum;
                                                continue;
                                }
                                else
                                {
                                                break;
                                }
                }
                if (sum==1 || sum==7)
                {
                                res=1;
                                return res;
                }
                else
                {
                                res=0;
                                return res;
                }
}
int main()
{
                int a,res;
                scanf("%d",&a);
                res=happy(a);
                if (res==1)
                {
                                printf("True");
                }
                else
                {
                                printf("False");
                }
                return 0;
}