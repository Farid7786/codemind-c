#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t>0)
    {
        int a,i,fact;
        scanf("%d",&a);
        fact=1;
        for(i=1;i<=a;i++)
        {
            fact=fact*i;
        }
        printf("%d
",fact);
        t--;
    }
}