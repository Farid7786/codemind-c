#include<stdio.h>
int main()
{
    int n,i,j,c=0,sum=0;
    scanf("%d",&n);
    int arr[i];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=i;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                c++;
            }
        }
        if(c==1&&arr[i]%2!=0)
        {
            sum++;
        }
    }
    printf("%d",sum);
}