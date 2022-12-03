#include<stdio.h>
void wave(int *arr,int n)
{
    int i,c=0,d=0;
    for(i=0;i<n-2;i+=2)
    {
        if((arr[i]<arr[i+1])&&(arr[i+2]<arr[i+1]))
        {
            c++;
        }
        else if(arr[i]>arr[i+1]&&(arr[i+2]>arr[i+1]))
        {
            c++;
        }
        else
        {
            c=0;
            break;
        }
    }
    if(c!=0)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
}
int main()
{
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    wave(arr,n);
}