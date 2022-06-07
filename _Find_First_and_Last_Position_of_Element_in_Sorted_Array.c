#include<stdio.h>
int main()
{
    int n,i,se,c=0,j,m=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&se);
    for(i=0;i<n;i++)
    {
        if(se==arr[i])
        {
            printf("%d ",i);
            c++;
            break;
        }
    }
    for(j=n-1;j>=0;j--)
    {
        if(se==arr[j])
        {
            printf("%d",j);
            m++;
            break;
        }
    }
    if(m==0&&c==0)
    {
        printf("-1 -1");
    }
}