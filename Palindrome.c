#include<stdio.h>
int main()
{
    int n,r,sum=0,h;
    scanf("%d",&n);
    h=n;
    while(n>0)
    {
        r=n%10;
        sum=sum*10+r;
        n=n/10;
    }
    if(sum==h)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}