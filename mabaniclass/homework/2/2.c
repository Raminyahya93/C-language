#include<stdio.h>

int main()
{
    printf("adad haye morde nazar ra vared konid");
    int i;
    double x;
    scanf("%lf", &x);
    double max = x;
    for(i=2;i<=20;i++)
    {
        scanf("%lf", &x);
        if(x>max)
        {
            max = x;
        }
    }
    printf("max = %f", max);

    return 0;
}