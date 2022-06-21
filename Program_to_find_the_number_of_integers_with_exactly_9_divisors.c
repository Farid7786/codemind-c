#include<stdio.h>
int main()
{
    int n,i,c=0,j,tot=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        c=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                c++;
            }
        }
        if(c==9)
        {
            printf("%d ",i);
            tot++;
        }
    }
    printf("
Total=%d",tot);
}