#include<stdio.h>
int main()
{
    int i , a[5] ;
    printf("adad ra vared konid\n");
    for(i=0;i<5;i++)
    {
        scanf("%d", &a[i]);
    }
    int j;
    for(j=4;j>=0;j--)
    {
        for(i=0;i<=j;i++)
        {
            if(a[i]>a[i+1])
            {
                int t = a[i];
                a[i]=a[i+1];
                a[i+1]=t;
            }
        }
    }
    printf("adad be tartib : ");
    for(i=0;i<5;i++)
    {
        printf("%d\t",a[i]);
    }
    
    return 0;
}