#include<stdio.h>
int main()
{
    int n,i,c=0,j,m=0,sum=0;
    scanf("%d",&n);
    float avg;
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
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
        if(c==2)
        {
            sum=sum+arr[i];
            m++;
        }
    }
    avg=float(sum)/float(m);
    printf("%.2f",avg);
}