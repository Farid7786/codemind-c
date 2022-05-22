#include<stdio.h>
int main()
{
    int n,e=0,o=0,i,abs;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            e=e+arr[i];
        }
        else
        {
            o=o+arr[i];
        }
    }
   if(o>e)
   {
       abs=o-e;
   }
   else
   {
       abs=e-o;
   }
   printf("%d",abs);
}