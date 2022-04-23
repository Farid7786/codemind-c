#include<stdio.h>
int main()
{
    int n,r,sum=0,temp;
    scanf("%d",&n);
    temp=n;
    while(temp>0)
    {
        r=temp%10;
        sum=sum*10+r;
        temp=temp/10;
    }
    if(n==sum)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}