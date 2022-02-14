#include<stdio.h>

int main()
{
    double x,y;
    scanf("%lf %lf", &x , &y);
    printf("%f", (x*y)-((double)x/y));
    return 0;
}