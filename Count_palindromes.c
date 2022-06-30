#include<stdio.h>
int main()
{
    int n,i,h,c=0,r,sum=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        h=arr[i];
        sum=0;
        while(arr[i]>0)
        {
            r=arr[i]%10;
            sum=sum*10+r;
            arr[i]=arr[i]/10;
        }
        if(h==sum)
        {
            c++;
        }
    }
    printf("%d",c);
}