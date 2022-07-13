#include<stdio.h>
int main()
{
    int n,i,r,c;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
        do
        {
            c+=1;
            arr[i]/=10;
        }
        while(arr[i]);
        printf("%d ",c);
    }
}