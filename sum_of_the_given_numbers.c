#include<stdio.h>
int main()
{
    int t,a,b,c;
    scanf("%d",&t);
    while(t>0)
    {
        scanf("%d%d",&a,&b);
        c=a+b;
        printf("%d
",c);
        t--;
    }
    return 0;
}