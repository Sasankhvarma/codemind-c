#include<stdio.h>
int main()
{
    int l,n;
    scanf("%d",&l);
    scanf("%d",&n);
    int w[n],h[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d%d",&w[i],&h[i]);
        if(w[i]==l&&h[i]==l)
        {
            printf("ACCEPTED
");
        }
        else if(w[i]<l||h[i]<l)
        {
            printf("UPLOAD ANOTHER
");
        }
        else if(w[i]==h[i])
        {
            printf("ACCEPTED
");
        }
        else if(w[i]>l||h[i]>l)
        {
            printf("CROP IT
");
        }
    }
}