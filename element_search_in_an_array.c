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
        if(arr[i]==se)
        {
            c++;
        }
    }
    if(c!=0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}