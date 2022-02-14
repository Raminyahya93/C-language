#include<stdio.h>

int main()
{
    int a[4][3], b[4][3],sum;
    for(int i = 0 ; i < 4 ; i++)
    {
        for(int j = 0 ; j < 3 ; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for(int i = 0 ; i < 4 ; i++)
    {
        for(int j = 0 ; j < 3 ;j++)
        {
            sum =0;
            sum = sum + a[i][j];
        }
        sum = sum /3;
        for( int j = 0 ; j < 3 ;j++)
        {
            b[i][j] = sum - a[i][j];
        }
    }
    return 0;
}