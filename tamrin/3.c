#include<stdio.h>

int main()
{
   int a[50],i,n;
   a[0]=1;a[1]=1;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       a[i+2]=a[i]+a[i+1];
   }
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;
}