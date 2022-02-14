#include<stdio.h>

int main()
{
    double i = -1 , x = 1 , y = 3 , sum = 1;
    for(int k = 0  ; k < 9 ; k++, x = x*2, y = y + 2, i = i * -1)
    { 
        sum = (double)sum + (x/y*i);
    }
    printf("%f", sum);
    return 0;
}