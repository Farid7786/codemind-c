#include<stdio.h>
#include<math.h>
int main()
{
    int t,n,i,k,m;
    scanf("%d",&t);
    while(t>0)
    {
        scanf("%d",&n);
        k=sqrt(n);
        m=k*k;
        if(m==n)
        {
            printf("True
");
        }
        else
        {
            printf("False
");
        }
        t--;
    }
}