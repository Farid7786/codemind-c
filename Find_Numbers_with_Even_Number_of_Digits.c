#include<stdio.h>
int main()
{
    int n,i,j,a[100],c=0,m=0,k,r;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
        k=a[i];
        while(k>0)
        {
            r=k%10;
            c++;
            k=k/10;
        }
        if(c%2==0)
        {
            m++;
        }
    }
    printf("%d",m);
    return 0;
}