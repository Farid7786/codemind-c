#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,c,sum=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    c=n-1;
    for(i=0;i<n;i++)
    {
        sum=sum+pow(2,c)*arr[i];
        c--;
    }
    printf("%d",sum);
}