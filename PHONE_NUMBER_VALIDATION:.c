#include<stdio.h>
int main()
{
    long int n,c=0,r;
    scanf("%ld",&n);
    while(n>0)
    {
        r=n%10;
        c++;
        n=n/10;
    }
    if(c==10)
    {
        printf("Valid");
    }
    else
    {
        printf("Invalid");
    }
}