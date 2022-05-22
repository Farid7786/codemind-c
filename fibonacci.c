#include<stdio.h>
int main()
{
    int n,a,b,c,i;
    scanf("%d",&n);
    a=0;
    b=1;
    c=a+b;
    printf("%d %d ",a,b);
    for(i=1;i<n-1;i++)
    {
        printf("%d ",c);
        a=b;
        b=c;
        c=a+b;
    }
    return 0;
}