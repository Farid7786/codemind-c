#include<stdio.h>
int main()
{
    int n,i,prod=1,j;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        prod=1;
        for(j=0;j<n;j++)
        {
            if(arr[i]!=arr[j])
            {
                prod=prod*arr[j];
            }
        }
        printf("%d ",prod);
    }
}