#include<stdio.h>
int main()
{
    int n,avg,i,sum=0,add=0,abo=0,diff=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n/2;i++)
    {
            add=add+arr[i];
    }
    for(i=n/2;i<n;i++)
    {
        abo=abo+arr[i];
    }
    if(add>abo)
    {
        diff=add-abo;
        printf("%d",diff);
    }
    else
    {
        diff=abo-add;
        printf("%d",diff);
    }
}