#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,h,sum,r,copy,j,k,add=0,rem,cpy,sub,min;
    scanf("%d",&n);
    for(i=n-1;i>0;i--)
    {
        h=i;
        sum=0;
        while(h>0)
        {
            r=h%10;
            sum=sum*10+r;
            h=h/10;
        }
        if(i==sum)
        {
            copy=i;
            break;
        }
    }
    for(j=n+1;j>n;j++)
    {
        k=j;
        add=0;
        while(k>0)
        {
            rem=k%10;
            add=add*10+rem;
            k=k/10;
        }
        if(j==add)
        {
            cpy=j;
            break;
        }
    }
    sub=n-copy;
    min=cpy-n;
    if(sub>min)
    {
        printf("%d",cpy);
    }
    else if(min>sub)
    {
        printf("%d",copy);
    }
    else if(min==sub)
    {
        printf("%d %d",copy,cpy);
    }
}