#include<stdio.h>
int main()
{
    int n,c=0,a,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]%2!=0)
        {
            c++;
        }
    }
    if(c<=2)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}