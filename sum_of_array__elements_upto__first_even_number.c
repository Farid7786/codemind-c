#include<stdio.h>
int main()
{
    int n,i,k,sum=0,c=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
   for(i=0;i<n;i++)
   {
       if(arr[i]%2!=0)
       {
           sum=sum+arr[i];
       }
       else
       {
           break;
       }
   }
   printf("%d",sum);
}