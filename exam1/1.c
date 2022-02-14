#include<stdio.h>

int main()
{
    int x,y,j=0;
    scanf("%d", &x);
    for(; x > 0 ;x= x/10)
    {
        y = x%10;
        if(y != 0)
        {
            j = (j*10)+y;
        }
    }
    printf("%d",j);
    return 0;
}