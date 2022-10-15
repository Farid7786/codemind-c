#include<stdio.h>
int main()
{
    int n,i,j,a[100],sum=0,p=0,s,k;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    k=n/2;
    for(i=0;i<k;i++)
    {
       sum=sum+a[i];
    }
    for(i=k;i<n;i++)
    {
        p=p+a[i];
    }
    s=sum-p;
    if(s%4==0)
    {
        printf("X");
    }
    else
    {
        printf("Y");
    }
}