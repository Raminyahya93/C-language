#include<stdio.h>

int main()
{
    printf(" adad mode naza ra waed konid\n");
    int i , a[15];
    for(i=0;i<15;i++)
    {
        scanf("%d", a[i]);
    }
    
    for(i=0;i<7;i++)
    {
        if(a[i]==a[15-i])
        {
            continue;
        }else
        {
            printf("nist");
            return 0;
        }
    }
    printf("ast");
    
    return 0;
}