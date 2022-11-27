#include<stdio.h>
int pali()
{
    int n,i,j,c,sum,r,h;
    scanf("%d",&n);
    for(i=n+1;i>n;i++)
    {
        sum=0;
        h=i;
        while(h>0)
        {
            r=h%10;
            sum=sum*10+r;
            h=h/10;
        }
        if(i==sum)
        {
            c=0;
            for(j=1;j<=i;j++)
            {
                if(i%j==0)
                {
                    c++;
                }
            }
            if(c==2)
            {
                printf("%d",i);
                break;
            }
        }
    }
}
int main()
{
    pali();
}