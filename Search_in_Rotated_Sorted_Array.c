#include<stdio.h>
int main()
{
    int n,i,se,c=0;
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
        }
    }
    if(c==0)
    {
        printf("-1");
    }
}