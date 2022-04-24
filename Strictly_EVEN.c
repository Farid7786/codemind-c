#include<stdio.h>
int main()
{
    int n,i,c=0,m=0;
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
        if(arr[i]%2==0)
        {
                c++;
        }
        }
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            m++;
        }
    }
    if(c==m)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}