#include<stdio.h>
int main()
{
    int s,k;
    scanf("%d",&s);
    for(k=0;k<s;k++)
    {
        int n,m;
        scanf("%d%d",&n,&m);
        int i,j,a[n],b[m],c[n+m],temp;
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(j=0;j<m;j++)
        {
            scanf("%d",&b[j]);
        }
        for(i=0;i<n;i++)
        {
            c[i]=a[i];
        }
        for(j=0;j<m;j++)
        {
            c[j+n]=b[j];
        }
        for(i=0;i<n+m;i++)
        {
            for(j=0;j<n+m;j++)
            {
                if(c[i]<c[j])
                {
                    temp=c[i];
                    c[i]=c[j];
                    c[j]=temp;
                }
            }
        }
        for(i=0;i<n+m;i++)
        {
            if(i==n+m-1)
            {
                printf("%d",c[i]);
            }
            else
            {
                printf("%d ",c[i]);
            }
        }
        printf("
");
    }
}