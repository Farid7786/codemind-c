#include<stdio.h>
void gen(int *arr,int n)
{
    int i,c=0,max;
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            max=arr[i];
        }
        while(i%2!=0)
        {
            c=arr[i];
            while(c>0)
            {
                printf("%d ",max);
                c--;
            }
            break;
        }
    }
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
    gen(arr,n);
}