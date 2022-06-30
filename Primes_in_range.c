#include<stdio.h>
#include<math.h>
int main()
{
    int n,m,c=0,i,j,cnt=0;
    scanf("%d",&n);
    scanf("%d",&m);
    if(n==1)
    {
        n=2;
    }
    for(i=n;i<=m;i++)
    {
        c=0;
        for(j=2;j<=sqrt(i);j++)
        {
            if(i%j==0)
            {
                c++;
            }
        }
        if(c==0)
        {
            cnt++;
        }
    }
    printf("%d",cnt);
}