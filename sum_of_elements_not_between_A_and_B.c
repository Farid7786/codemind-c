#include<stdio.h>
int main()
{
    int n,i,a,b,sum=0,c=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d%d",&a,&b);
    for(i=0;i<n;i++)
    {
        if(arr[i]<a)
        {
            sum=sum+arr[i];
        }
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]>b)
        {
            c=c+arr[i];
        }
    }
    printf("%d",sum+c);
}