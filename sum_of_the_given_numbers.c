#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t!=0)
    {
        int a,b;
        scanf("%d%d",&a,&b);
        printf("%d
",a+b);
        t--;
    }
}