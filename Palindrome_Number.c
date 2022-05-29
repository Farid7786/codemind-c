#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t>0)
    {
        int n,r,sum=0,k;
        scanf("%d",&n);
        k=n;
        while(k>0)
        {
            r=k%10;
            sum=sum*10+r;
            k=k/10;
        }
        if(sum==n)
        {
            printf("True
");
        }
        else
        {
            printf("False
");
        }
        t--;
    }
}