#include<stdio.h>

int main()
{
    double a[5];
    int i;
    printf("adad morde nazar ra vaed konid");
    for(i=0;i<5;i++)
    {
        scanf("%lf", &a[i]);
        a[i]= a[i]+(double)5/100*a[i] ;
    }
    for(i=0;i<5;i++)
    {
        printf("%f\n", a[i]);
    }
    return 0;
}