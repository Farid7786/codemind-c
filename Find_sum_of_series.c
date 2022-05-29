#include<stdio.h>
int main()
{
    int n,i;
    float sum=0,ap;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+(1.0/i);
    }
    printf("%.2f",sum);
}