#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,swap=0,j;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        arr[i]=pow(arr[i],2);
    }
    for(i=0;i<n;i++)
    {
        swap=0;
        for(j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                swap=arr[i];
                arr[i]=arr[j];
                arr[j]=swap;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}