#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int ar[n],i,j,c=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(j>i)
            {
                if(ar[i]!=0)
                {
                    if(ar[j]!=0)
                    {
                        if(ar[i]==ar[j])
                        {
                            ar[i]=0;
                            ar[j]=0;
                            c=c+1;
                        }
                    }
                }
            }
        }
    }
    printf("%d",c);
}