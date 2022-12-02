#include<stdio.h>
int main()
{
    int i,n,c=0,j,sum=0,divi,cnt=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=0;j<n;j++)
        {
            if((arr[i]==arr[j])&&(arr[i]!=-1))
            {
                c++;
            }
        }
        arr[i]=-1;
        if(c%2==0)
        {
            cnt++;
        }
    }
    printf("%d",cnt);
}