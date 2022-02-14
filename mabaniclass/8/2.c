#include<stdio.h>
inline<1.h>

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

int main()
{
    int r,p;
    r = power(5,6);
    p = r - power(4,3);
    printf("resuld = %d", p);
    return 0;
}