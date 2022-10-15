#include<stdio.h>
#include<math.h>
int main()
{
    int n,k,p;
    scanf("%d",&n);
    k=sqrt(n);
    p=k*k;
    if(p==n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}