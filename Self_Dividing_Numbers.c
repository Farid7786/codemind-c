#include<stdio.h>
int main()
{
    int n,m,r,i,k;
    scanf("%d %d",&n,&m);
    for(i=n;i<=m;i++)
    {
        k=i;
        while(k>0)
        {
            r=k%10;
            if(r==0||i%r!=0)
            {
                break;
            }
            k=k/10;
        }
        if(k==0)
        {
            printf("%d ",i);
        }
    }
}