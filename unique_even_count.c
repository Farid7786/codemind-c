#include<stdio.h>
int main()
{
    int n,i,j,c,sum=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                c++;
            }
        }
        if(c==0&&arr[i]%2==0)
        {
            sum++;
        }
    }
    printf("%d",sum);
}