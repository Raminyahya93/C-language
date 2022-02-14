#include<stdio.h>

int max(double x ,double y ,double j)
{
    double maxx = x ;
    if( maxx < y )
    {
        maxx = y;
    }
    if(maxx < j)
    {
        maxx = j;
    }
    
    return maxx;
}

int main()
{
    printf("3 adad morde nazar ra vared konid\n");
    double k , l , i ;
    scanf("%lf%lf%lf", &k , &l , &i);
    double f =max(k , l , i);
    printf("max =%f", f);
    return 0;
}