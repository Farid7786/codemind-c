#include<stdio.h>
int main()
{
    int n,i=0,r,j;
    scanf("%d",&n);
    int arr[n];
    while(n>0)
    {
        r=n%10;
        arr[i]=r;
        i++;
        n=n/10;
    }
    for(j=i-1;j>=0;j--)
    {
        if(arr[j]==6)
        {
            arr[j]=9;
            break;
        }
    }
    for(j=i-1;j>=0;j--)
    {
        printf("%d",arr[j]);
    }
}