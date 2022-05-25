#include<stdio.h>
int main()
{
    int n,r,t,m,c,i;
    scanf("%d",&t);
    while(t>0)
    {
        c=0;
        scanf("%d %d",&n,&m);
        for(i=n;i<=m;i++)
        {
            r=i%10;
            if(r==2||r==3||r==9)
            {
                c++;
            }
        }
        printf("%d
",c);
        t--;
    }
}