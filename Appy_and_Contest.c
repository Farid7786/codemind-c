#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t>0)
    {
        int n,a,b,k,l=0,c=0,d=0,f;
        scanf("%d %d %d %d",&n,&a,&b,&k);
        if(a%b==0)
        {
            l=a;
        }
        else if(b%a==0)
        {
            l=b;
        }
        else
        {
            l=a*b;
        }
        f=n/l;
        c=n/a;
        d=n/b;
        c=c-f;
        d=d-f;
        if(c+d>=k)
        {
            printf("Win
");
        }
        else
        {
            printf("Lose
");
        }
        t--;
    }
}