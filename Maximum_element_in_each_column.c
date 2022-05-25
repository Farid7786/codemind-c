#include<stdio.h>
int main()
{
    int n,m,i,j,cmax=0;
    scanf("%d %d",&n,&m);
    int arr[100][100];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(j=0;j<m;j++)
    {
        cmax=0;
        for(i=0;i<n;i++)
        {
            if(cmax<arr[i][j])
            {
                cmax=arr[i][j];
            }
        }
        printf("%d
",cmax);
    }
}