#include<stdio.h>
#include<math.h>
int main()
{
    int n,k,r;
    scanf("%d",&n);
    k=sqrt(n);
    r=k*k;
    if(r==n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}