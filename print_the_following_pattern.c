#include<stdio.h>
int main()
{
    int n,i,j,k;
    scanf("%d",&n);
    k=n-1;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j || j==0 || i+j==k)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        k++;
        printf("
");
    }
    return 0;
}