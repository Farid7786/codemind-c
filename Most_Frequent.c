#include<stdio.h>
void most(int *arr,int n)
{
    int i,c=0,max,j,copy;
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=0;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                c+=1;
            }
        }
        if(max<c)
        {
            max=c;
            copy=arr[i];
        }
        else if(max==c)
        {
            if(copy>arr[i])
            {
                copy=arr[i];
            }
        }
    }
    printf("%d",copy);
    
}
int main()
{
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    most(arr,n);
}