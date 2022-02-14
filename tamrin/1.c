#include<stdio.h>

int main()
{
    double a[20],b[20],c;
    for(int i=0 ; i < 5 ; i++)
    {
        scanf("%lf", &a[i]);
    }
    for(int i=0 ; i < 5 ; i++)
    {
        c=a[i]/100*5;
        b[i]=(float)a[i]+c;
    
    }
    for(int i=0 ; i < 5 ; i++)
    {
       printf("%f\n", b[i]);
    }
    return 0;
}