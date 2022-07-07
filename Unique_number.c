#include<stdio.h>
int main()
{
    int n,i=0,r,k=0,c=0,m=0,j;
    scanf("%d",&n);
    int arr[1000];
    while(n>0)
    {
        r=n%10;
        arr[i]=r;
        i++;
        k++;
        n=n/10;
    }
    for(i=0;i<k;i++)
    {
        c=0;
        for(j=0;j<k;j++)
        {
            if(arr[i]==arr[j])
            {
                c++;
            }
        }
        if(c==1)
        {
            m++;
        }
    }
    if(m==k)
    {
        printf("Unique Number");
    }
    else
    {
        printf("Not Unique Number");
    }
}