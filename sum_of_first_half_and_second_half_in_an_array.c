#include<stdio.h>
int main()
{
    int n,i,sum=0,add=0,sub=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n/2;i++)
    {
        sum=sum+arr[i];
    }
    printf("%d
",sum);
    for(i=n/2;i<n;i++)
    {
        add=add+arr[i];
    }
    printf("%d",add);
}