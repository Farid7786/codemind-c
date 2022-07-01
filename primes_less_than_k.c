#include<stdio.h>
int main()
{
    int n,i,c=0,k,j,m=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=1;j<=arr[i];j++)
        {
            if(arr[i]%j==0)
            {
                c++;
            }
        }
        if(c==2&&arr[i]<=k)
        {
            m++;
        }
    }
    printf("%d",m);
}