#include<stdio.h>
int main()
{
    int i, f , a[5];
    for(i=0;i<5;i++)
    {
        scanf("%d", &a[i]);
    }
    i=0;
    int c;
    printf("adad mode naza ra vaed konid");
    scanf("%d", &c);
    for(i=0;i<5;i++)
    {
        if(c==a[i])
        {
            printf("yes a[ %d ]", i);
            return 0;
        }
    }
    printf("no");
    return 0;
}