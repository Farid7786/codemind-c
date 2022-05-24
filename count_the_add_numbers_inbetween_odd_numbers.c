#include<stdio.h>
int main()
{
    int n,i,c=0,r;
    scanf("%d",&n);
    int arr[n];
    for(i=1;i<=n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=1;i<=n;i+=2)
    {
        if(arr[i]%2!=0)
        {
            c++;
        }
    }
    printf("%d",c);
}