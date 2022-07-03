#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t!=0)
    {
        int n,i,c=0,m=0,k;
        scanf("%d",&n);
        int arr[n];
        for(i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }
        for(i=0;i<n;i++)
        {
            if(arr[i]%2!=0)
            {
                c++;
            }
            else
            {
                m++;
            }
        }
        k=c/2;
        printf("%d
",k);
        t--;
    }
}
