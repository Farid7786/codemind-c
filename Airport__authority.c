#include<stdio.h>
int main()
{
    int n,i,t,c=0,sum;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d
",&arr[i]);
    }
    scanf("%d",&t);
    for(i=0;i<n;i++)
    {
        if(arr[i]<=t)
        {
            c++;
        }
        else
        {
            c+=2;
        }
    }
    printf("%d",c);
}