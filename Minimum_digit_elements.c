#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,k,max=0,c=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
       k=(int)log10(arr[i])+1;
       arr[i]=k;
    }
    max=arr[0];
    for(i=0;i<n;i++)
    {
        if(arr[i]<max)
        {
            max=arr[i];
        }
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]==max)
        {
            c++;
        }
    }
    printf("%d",c);
    return 0;
}