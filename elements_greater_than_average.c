#include<stdio.h>
int main()
{
    int n,i,sum=0,avg,c=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    avg=sum/n;
    for(i=0;i<n;i++)
    {
        if(arr[i]>=avg)
        {
            c+=1;
        }
    }
    printf("%d",c);
}