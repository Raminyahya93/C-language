#include<stdio.h>

int power(int a, int b)
{
    int i;
    int p=1;
    for(i=1;i<=b;i++)
    {
        p=p*a;
    }
    return p;
}
