#include<stdio.h>

int main()
{
    double i , k , sgn , sum;
    sum = 0;
    for(i = 1 , k = 1 , sgn = 1 ; i<=20 ; i++ , k = k * i , sgn = sgn * -1)
    {
        sum= sum + (1/k * sgn);
    }
    printf("%f",sum);
    return 0;
}