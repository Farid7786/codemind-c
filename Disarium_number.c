#include<stdio.h>
#include<math.h>
int main()
{
    int n,c=0,r,sum=0,k,h,rem,add=0;
    scanf("%d",&n);
    h=n;
    while(n>0)
    {
        r=n%10;
        sum=sum*10+r;
        n=n/10;
    }
    while(sum>0)
    {
       rem=sum%10;
       c+=1;
       k=pow(rem,c);
       add=add+k;
       sum=sum/10;
    }
    if(add==h)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}