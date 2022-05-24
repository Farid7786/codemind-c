#include<stdio.h>
int main()
{
    int n,i,j,c,m=0,k;
    scanf("%d",&n);
    int arr[100];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=1;j<arr[i];j++)
        {
            if(arr[i]%j==0)
            {
                c++;
            }
        }
        if(c==1)
        {
            if(arr[i]<=k)
            {
              m++;
            }
        }
    }
    printf("%d",m);
    return 0;
}