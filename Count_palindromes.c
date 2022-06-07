#include<stdio.h>
int main()
{
    int n,i,c=0,r,sum=0,h;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        sum=0;
        h=arr[i];
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