#include<stdio.h>
int main()
{
    int n,i,sum=0,add=0,r;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=0;
        while(arr[i]>0)
        {
            r=arr[i]%10;
            sum=sum+r;
            arr[i]=arr[i]/10;
        }
        add=add+sum;
    }
    printf("%d",add);
}