#include<stdio.h>
int main()
{
    int n,first=0,second=1,sum,sub,third;
    scanf("%d",&n);
    third=first+second;
    while(third<=n)
    {
        first=second;
        second=third;
        third=first+second;
    }
    sum=n-second;
    sub=third-n;
    if(sum==sub)
    {
        printf("%d %d",second,third);
    }
    else if(sum>sub)
    {
        printf("%d",third);
    }
    else if(sub>sum)
    {
        printf("%d",second);
    }
}