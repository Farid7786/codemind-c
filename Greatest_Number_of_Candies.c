#include<stdio.h>
int main()
{
    int n,i,sum=0,k;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
       if(arr[i]+k>=sum)
       {
           sum=arr[i];
           printf("True ");
       }
       else
       {
           printf("False ");
       }
    }
}