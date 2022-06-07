#include<stdio.h>
int main()
{
    int t,s,b,cap,kb;
    scanf("%d %d %d",&s,&t,&b);
    cap=2*s*t*b*512;
    kb=cap/1024;
    printf("%dKB",kb);
}