#include<stdio.h>

int checkmax(int x,int i)
{
    int max;
    if(i==0)
    {
        max = x;
    }
        if(max < x)
        {
            max = x;
        }
    return max;
}

int main()
{
    printf("adad morde nazar ra vared konid");
    int b,g;
    for(int i = 0 ; i<20 ; i++)
    {
        scanf("%d",&b);
        g = checkmax(b , i);
    }
    printf("max =%d",g);
}