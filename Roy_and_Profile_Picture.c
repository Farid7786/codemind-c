#include<stdio.h>
int main()
{
    int l,n;
    scanf("%d",&l);
    scanf("%d",&n);
    while(n>0)
    {
        int w,h;
        scanf("%d %d",&w,&h);
        if(w<l||h<l)
        {
            printf("UPLOAD ANOTHER
");
        }
        else if(w==h)
        {
            printf("ACCEPTED
");
        }
        else
        {
            printf("CROP IT
");
        }
        n--;
    }    
}