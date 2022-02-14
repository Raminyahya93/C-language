#include<stdio.h>

int main()
{
    printf("nomre ra vared konid :\n");
    double x;
    scanf("%lf", &x);
    if (17<x && x<=20)
    {
        printf("A");
    }
    else if(14<x && x<=17)
    {
        printf("B");
    }else if (10<=x && x<=14)
    {
        printf("C");
    }else if(x<10)
    {
        printf("D");
    }
    
    return 0;
}