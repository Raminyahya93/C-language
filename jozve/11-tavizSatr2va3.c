#include<stdio.h>

int main()
{
    int a[4][5],sum=0;
    for(int i = 0 ; i < 4 ; i++)
    {
        for(int j = 0 ; j < 5 ; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for(int j = 0; j<5 ; j++)
    {
        int temp = a[1][j];
        a[1][j] = a[2][j];
        a[2][j]=temp;
    }
    return 0;
}