#include<stdio.h>
int main()
{
    int n,i,k,sum=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);
    for(i=0;i<k;i++)
    {
        sum=sum+arr[i];
    }
    printf("%d",sum);
}