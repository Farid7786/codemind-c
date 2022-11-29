#include<stdio.h>
int main()
{
    int a,b,sum,c=0,i,j,cnt=0;
    scanf("%d",&a);
    scanf("%d",&b);
    sum=a+b;
    for(i=sum+1;i>=sum;i++)
    {
        c=0;
        cnt++;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                c++;
            }
        }
        if(c==2)
        {
            printf("%d",cnt);
            break;
        }
    }
}