#include<stdio.h>
int main()
{
    int n,i,j,a[100],c=0,sum=0,m=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=0;j<n;j++)
        {
            if(a[i]==a[j])
            {
                c++;
            }
        }
        if(c==1)
        {
            if(a[i]>sum)
            {
                sum=a[i];
                m++;
                
            }
        }
    }
    if(m==0)
    {
        printf("-1");
    }
    else
    {
       printf("%d",sum);
    }
}