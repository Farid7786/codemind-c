#include<stdio.h>
int main()
{
    int n,m,i,j,c=0,s=0;
    scanf("%d",&n);
    scanf("%d",&m);
    for(i=n;i<=m;i++)
    {
        c=0;
        for(j=i;j<=m;j++)
        {
            c=c+j;
            if(c%2!=0)
            {
                s=s+1;
            }
        }
    }
    printf("%d",s);
    return 0;
}