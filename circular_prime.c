#include<stdio.h>
int main()
{
    int n,i,r,sum=0,c=0,m=0,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            c++;
        }
    }
    while(n>0)
    {
        r=n%10;
        sum=sum*10+r;
        n=n/10;
    }
    for(j=1;j<=sum;j++)
    {
        if(sum%j==0)
        {
            m++;
        }
    }
    if(c==2&&m==2)
    {
        printf("circular prime");
    }
    else if(c==2&&m!=2)
    {
        printf("prime but not a circular prime");
    }
    else if(c!=2&&m!=2)
    {
        printf("not prime");
    }
}