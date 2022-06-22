#include<stdio.h>
int main()
{
    int n,i,sum=0,j;
    scanf("%d",&n);
    int arr[n],brr[n],crr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        scanf("%d",&brr[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i;j<=i;j++)
        {
            crr[i]=arr[i]+brr[i];
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",crr[i]);
    }
}