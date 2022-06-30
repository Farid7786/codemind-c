#include<stdio.h>
int main()
{
    int n,max,i,c=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&max);
    for(i=0;i<n;i++)
    {
        if(max==arr[i])
        {
            c+=1;
            break;
        }
    }
    if(c==1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}