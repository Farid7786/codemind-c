#include<stdio.h>
int main()
{
    int n,temp,r,sum=0,store;
    scanf("%d",&n);
    temp=n*n;
    store=temp;
    while(temp>0)
    {
        r=temp%10;
        sum=sum+r;
        temp=temp/10;
    }
    if(n==sum)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}