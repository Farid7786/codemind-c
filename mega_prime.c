#include<stdio.h>
int main()
{
    int n,i,c=0,r,d=0,cnt=0,m=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            c++;
        }
    }
    if(c==2)
    {
        while(n>0)
        {
            r=n%10;
            d++;
            cnt=0;
            for(i=1;i<=r;i++)
            {
                if(r%i==0)
                {
                    cnt++;
                }
            }
            if(cnt==2)
            {
                m++;
            }
            n=n/10;
        }
    }
    if(c==2&&d==m)
    {
        printf("Mega Prime");
    }
    else
    {
        printf("Not Mega Prime");
    }
}