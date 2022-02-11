#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,q,r,k,c=0,c1,l;
    scanf("%d",&n);
    for(k=2;k<=sqrt(n);k++)
    {
        if(n%k==0)
        {
            c=c+1;
            break;
        }
    }
    if(c!=0)
    {
        printf("Not Mega Prime");
    }
    else
    {
        q=n;
        while(q>0)
        {
            r=q%10;
            if(r==2 || r==3 || r==5 || r==7)
            {
                r=r;
            }
            else
            {
                printf("Not Mega Prime");
                l=1;
                break;
            }
            q=q/10;
        }
        if(l!=1)
        {
            printf("Mega Prime");
        }
    }
}