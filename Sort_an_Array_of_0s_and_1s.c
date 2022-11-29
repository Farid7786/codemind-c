#include<stdio.h>
int main()
{
    int n,i,j,m=100;
    scanf("%d",&n);
    int arr[n];
    int brr[100];
    int crr[100];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]==0)
        {
           printf("%d ",arr[i]);
        }
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]==1)
        {
            printf("%d ",arr[i]);
        }
    }
}