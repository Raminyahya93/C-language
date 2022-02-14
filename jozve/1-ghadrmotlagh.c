#include<stdio.h>

int ghadrmotlagh(double x)
{
    if(x>=0)
    {
        return x;
    }else{
        return x*-1;
    }
}

int main()
{
    double a ;
    printf("adad morede nazar ra vared konid\n");
    scanf("%lf", &a);
    double x =  ghadrmotlagh(a);
    printf("%f",x);
    return 0;
}