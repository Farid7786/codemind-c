#include<stdio.h>
int main()
{
    int n,i,j,k;
    scanf("%d",&n);
    k=n;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j || i+j==(n-1))
            {
                printf("%d ",k);
            }
            else
            {
                printf(" ");
            }
        }
        k=k-1;
        printf("
");
    }
}