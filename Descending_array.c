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
    c=arr[0];
    for(i=0;i<n;i++)
    {
        if(c>=arr[i])
        {
            c=arr[i];
            m++;
        }
    }
    if(m==n)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
}