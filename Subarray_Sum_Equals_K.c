#include<stdio.h>
int main()
{
    int n,i,sum=0,k,c=0,j;
    scanf("%d%d",&n,&k);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=0;
        for(j=i;j<n;j++)
        {
            sum=sum+arr[j];
            if(sum==k)
            {
                c+=1;
            }
        }
    }
    printf("%d",c);
}