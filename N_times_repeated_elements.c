#include<stdio.h>
int main()
{
    int n,i,c=0,m,j,cnt=0,k;
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
        for(j=0;j<n;j++)
        {
           if(arr[j]==arr[i]&&arr[i]!=-1)
           {
               c++;
           }
        }
        if(c==k)
        {
            printf("%d ",arr[i]);
            arr[i]=-1;
            cnt++;
        }
    }
    if(cnt==0)
    {
        printf("-1");
    }
}