#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int c=0;
    for(i=0;i<n-2;i++)
    {
        if(arr[i]%2!=0 && arr[i+2]%2==0){
            c+=1;
        }
        else if(arr[i]%2==0 && arr[i+2]%2!=0){
            c+=1;
        }
    }
    if((arr[n-2]%2!=0 && arr[0]%2==0)||(arr[n-2]%2==0 && arr[0]%2!=0)){
        c+=1;
    }
    if((arr[n-1]%2!=0 && arr[1]%2==0)||(arr[n-1]%2==0 && arr[1]%2!=0)){
        c+=1;
    }
    printf("%d",c);
}