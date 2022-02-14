#include<stdio.h>

int setare(int x)
{
    for(int i = 0; i<x ; i++)
    {
        printf("* ");
    }
}

int main()
{
    printf("tedad setare morede nazar ra vared konid\n");
    int y;
    scanf("%d", &y);
    setare(y);
}