#include<stdio.h>
int main()
{
    int n,i,e=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(i%2==0)
        {
            e=e+arr[i];
        }
    }
    printf("%d",e);
}