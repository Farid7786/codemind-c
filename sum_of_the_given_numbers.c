#include<stdio.h>
int main()
{
    int a,b,c,t;
    scanf("%d",&t);
    while(t>0)
    {
        scanf("%d %d",&a,&b);
        c=a+b;
        printf("%d
",c);
        t--;
    }
}