#include<stdio.h>
int main()
{
    int n,i,c=0,r,sum=0,h;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        while(arr[i]>0)
        {
            r=arr[i]%10;
            sum=sum+r;
            arr[i]=arr[i]/10;
        }
    }
    printf("%d",sum);
}