#include<stdio.h>
int main()
{
    int n,i,j,a[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==0)
        {
            continue;
        }
        else
        {
            printf("%d ",a[i]);
        }
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==0)
        {
            printf("%d ",a[i]);
        }
    }
    return 0;
}