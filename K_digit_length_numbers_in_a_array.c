#include<stdio.h>
int main()
{
    int n,k,i,r,c,m=0;
    scanf("%d%d",&n,&k);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
        do
        {
            c+=1;
            arr[i]/=10;
        }
        while(arr[i]);
        if(c==k)
        {
            m++;
        }
    }
    printf("%d",m);
}