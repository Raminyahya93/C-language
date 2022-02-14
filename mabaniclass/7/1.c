#include<stdio.h>

int main()
{
    int a[3][4];
    int b[4];
    int i , j , x = 0;
    for(i=0 ; i < 3 ; i++)
    {
        for(j=0; j < 4 ; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        int max = a[i][0];
        for(j=0;j<4;j++,x++)
        {
            if(max>a[i][j])
            {
                max = a[i][j];
                b[x]= a[i][j];
            }
        }
    }
    for(x=0;x<3;x++)
    {
        printf("%d",b[x]);
    }
    return 0;
}