#include<stdio.h>
int main()
{
    long int n,i,c=0;
    scanf("%ld",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%ld",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]<=arr[i+1])
        {
            c++;
        }
    }
    if(c==n)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
}