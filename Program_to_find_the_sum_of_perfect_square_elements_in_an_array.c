#include<stdio.h>
#include<math.h>
int main()
{
    int n,a[100],i,sum=0,k,s;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        k=sqrt(a[i]);
        s=k*k;
        if(s==a[i])
        {
            sum=sum+a[i];
        }
    }
    printf("%d",sum);
    return 0;
}