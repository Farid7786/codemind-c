#include<stdio.h>
int main()
{
    int n,i,c=0,j,m=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            c=0;
            for(j=1;j<=i;j++)
            {
                if(i%j==0)
                {
                    c++;
                }
            }
            if(c!=2)
            {
                m++;
            }
        }
    }
    printf("%d",m);
}