#include<stdio.h>
#include<math.h>
int main()
{
    int n,h,sum=0,r,d;
    scanf("%d",&n);
    h=n;
    d=log10(n)+1;
    while(n>0)
    {
        r=n%10;
        sum=sum+pow(r,d);
        n=n/10;
        d--;
    }
    if(h==sum)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}