#include<stdio.h>
int main()
{
    int n,r,x,p,sum=0,i,c;
    scanf("%d",&n);
    c=n*n;
    while(n>0)
    {
        r=n%10;
        sum=sum*10+r;
        n=n/10;
    }
    x=sum*sum;
    while(x>0)
    {
        i=x%10;
        p=p*10+i;
        x=x/10;
    }
    if(c==p)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}