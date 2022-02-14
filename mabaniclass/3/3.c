#include<stdio.h>

int main()
{
    double i;
    double sum = 0;
    double j;
    for(i=1 , j=1;i<=10;i++,j=j+2)
    {
        sum = sum + j/i;
    }
printf("%f",sum);
    return 0;
}