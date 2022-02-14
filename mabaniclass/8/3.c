#include<stdio.h>

int fa( int x)
{
    int i ,sum = 1;
    for(i = 1; i<= x;i++ )
    {
        sum *= i;
    }
    return sum;
}



 int main()
 {
     int i =1 , k = 1 ; double g = 0;
     for(;i<=10;i++)
     {
         g += (double)1/fa(i);
     }

     printf("%f", g);
     return 0;
 }