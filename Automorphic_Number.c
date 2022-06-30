#include<stdio.h>
#include<math.h>
int main()
{
    int n,sq,r,i,c=0,p=0,mod,h;
    scanf("%d",&n);
    sq=n*n;
    h=n;
    while(n>0)
    {
        r=n%10;
        c++;
        n=n/10;
    }
    p=pow(10,c);
    mod=sq%p;
    if(mod==h)
    {
        printf("Automorphic Number");
    }
    else
    {
        printf("Not an Automorphic Number");
    }
}