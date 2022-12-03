#include<stdio.h>
int main()
{
    int n,i,j,max=0,c=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            max=arr[i];
        }
        while(i%2!=0)
        {
            c=arr[i];
            while(c>0)
            {
                printf("%d ",max);
                c--;
            }
            break;
        }
    }
}