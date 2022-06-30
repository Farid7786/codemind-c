#include<stdio.h>
int main()
{
    int n,i,r,c=0,sum=0,rev=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            c++;
        }
    }
    if(c==2)
    {
        while(n>0)
        {
            r=n%10;
            sum=sum*10+r;
            n=n/10;
        }
    }
    for(i=1;i<=sum;i++)
    {
        if(sum%i==0)
        {
            rev++;
        }
    }
    if(c==rev)
    {
        printf("circular prime");
    }
    else if(c==2&&rev!=2)
    {
        printf("prime but not a circular prime");
    }
    else if(c!=2&&rev!=2)
    {
        printf("not prime");
    }
}