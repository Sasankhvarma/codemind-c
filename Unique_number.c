#include<stdio.h>
int main()
{
 int a;
 scanf("%d",&a);
 int c=0,b,i,j,r,count=0;
 r=a;
 while(r>0)
 {
     c++;
     r=r/10;
 }
 int arr[c];
 r=a;
 for(i=0;i<c;i++)
 {
     b=r%10;
     arr[i]=b;
     r=r/10;
 }
 for(i=0;i<c;i++)
 {
     for(j=0;j<c;j++)
     {
         if(i!=j)
         {
             if(arr[i]==arr[j])
             {
                 count++;
                 break;
             }
         }
     }
 }
 if(count==0)
 {
     printf("Unique Number");
 }
 else
 {
     printf("Not Unique Number");
 }
}