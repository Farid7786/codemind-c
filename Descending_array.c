#include<stdio.h>
int main()
{
  long long int n,i,c=0;
    scanf("%lld",&n);
  long long int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%lld",&arr[i]);
    }
    if(n==0||n==1)
    {
        printf("yes");
    }
    else
    {
        for(i=1;i<n;i++)
        {
        if(arr[i-1]<arr[i])
        {
            c++;
        }
        }
    }
    if(c==0)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
}